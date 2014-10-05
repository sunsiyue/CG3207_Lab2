----------------------------------------------------------------------------------
-- Company: NUS
-- Engineer: Rajesh Panicker
-- 
-- Create Date:   10:39:18 13/09/2014
-- Design Name: 	ALU
-- Target Devices: Nexys 4 (Artix 7 100T)
-- Tool versions: ISE 14.7
-- Description: ALU template for MIPS processor
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------


------------------------------------------------------------------
-- ALU Entity
------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity alu is
generic (width 	: integer := 32);
Port (Clk			: in	STD_LOGIC;
		Control		: in	STD_LOGIC_VECTOR (5 downto 0);
		Operand1		: in	STD_LOGIC_VECTOR (width-1 downto 0);
		Operand2		: in	STD_LOGIC_VECTOR (width-1 downto 0);
		Result1		: out	STD_LOGIC_VECTOR (width-1 downto 0);
		Result2		: out	STD_LOGIC_VECTOR (width-1 downto 0);
		Status		: out	STD_LOGIC_VECTOR (2 downto 0); -- busy (multicycle only), overflow (add and sub), zero (sub)
		Debug			: out	STD_LOGIC_VECTOR (width-1 downto 0));		
end alu;


------------------------------------------------------------------
-- ALU Architecture
------------------------------------------------------------------

architecture Behavioral of alu is

type states is (COMBINATIONAL, MULTI_CYCLE);
signal state, n_state 	: states := COMBINATIONAL;


----------------------------------------------------------------------------
-- Adder instantiation
----------------------------------------------------------------------------
component adder is
generic (width : integer);
port (A 		: in 	std_logic_vector(width-1 downto 0);
		B 		: in 	std_logic_vector(width-1 downto 0);
		C_in 	: in 	std_logic;
		S 		: out std_logic_vector(width-1 downto 0);
		C_out	: out std_logic);
end component adder;

----------------------------------------------------------------------------
-- Adder signals
----------------------------------------------------------------------------
signal B 		: std_logic_vector(width-1 downto 0) := (others => '0'); 
signal C_in 	: std_logic := '0';
signal S 		: std_logic_vector(width-1 downto 0) := (others => '0'); 
signal C_out	: std_logic := '0'; --not used




----------------------------------------------------------------------------
-- ADD instantiation
----------------------------------------------------------------------------
component ADD is
generic (width : integer);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Overflow_ADD : out  STD_LOGIC;
           Result_ADD : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end component ADD;

----------------------------------------------------------------------------
-- ADD signals
----------------------------------------------------------------------------

signal Overflow_ADD : STD_LOGIC := '0';
signal Result_ADD : STD_LOGIC_VECTOR (width-1 downto 0);

----------------------------------------------------------------------------
-- SUB instantiation
----------------------------------------------------------------------------
component SUB is
generic (width : integer);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Overflow_SUB : out  STD_LOGIC;
           Result_SUB : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end component SUB;

----------------------------------------------------------------------------
-- SUB signals
----------------------------------------------------------------------------

signal Overflow_SUB: STD_LOGIC := '0';
signal Result_SUB: STD_LOGIC_VECTOR (width-1 downto 0);



----------------------------------------------------------------------------
-- SLT instantiation
----------------------------------------------------------------------------
component SLT is
generic (width : integer);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (31 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (31 downto 0);
           Result_SLT : out  STD_LOGIC_VECTOR (31 downto 0);
			  Clk : in  STD_LOGIC);
end component SLT;

----------------------------------------------------------------------------
-- SLT signals
----------------------------------------------------------------------------

signal Result_SLT: STD_LOGIC_VECTOR (width-1 downto 0);

----------------------------------------------------------------------------
-- SLTU instantiation
----------------------------------------------------------------------------
component SLTU is
generic (width : integer);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (31 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (31 downto 0);
           Result_SLTU : out  STD_LOGIC_VECTOR (31 downto 0);
			  Clk : in  STD_LOGIC);
end component SLTU;

----------------------------------------------------------------------------
-- SLTU signals
----------------------------------------------------------------------------

signal Result_SLTU: STD_LOGIC_VECTOR (width-1 downto 0);

----------------------------------------------------------------------------
-- BOOTH_MULT instantiation
----------------------------------------------------------------------------
component BOOTH_MULT is
generic (width : integer);
Port ( EnableB : in STD_LOGIC := '0';
		 LowerB : out  STD_LOGIC_VECTOR (width-1 downto 0);
       UpperB : out  STD_LOGIC_VECTOR (width-1 downto 0);
       Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
       Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
       Clk : in STD_LOGIC);
end component BOOTH_MULT;

----------------------------------------------------------------------------
-- BOOTH_MULT signals
----------------------------------------------------------------------------

signal EnableB : STD_LOGIC := '0';
signal LowerB : STD_LOGIC_VECTOR (width-1 downto 0);
signal UpperB : STD_LOGIC_VECTOR (width-1 downto 0);



----------------------------------------------------------------------------
-- MULTU instantiation
----------------------------------------------------------------------------
component MULTU is
generic (width : integer);
Port ( EnableU : in STD_LOGIC := '0';
		 LowerU : out  STD_LOGIC_VECTOR (width-1 downto 0);
       UpperU : out  STD_LOGIC_VECTOR (width-1 downto 0);
       Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
       Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
       Clk : in STD_LOGIC);
end component MULTU;

----------------------------------------------------------------------------
-- MULTU signals
----------------------------------------------------------------------------

signal EnableU : STD_LOGIC;
signal LowerU : STD_LOGIC_VECTOR (width-1 downto 0);
signal UpperU : STD_LOGIC_VECTOR (width-1 downto 0);

----------------------------------------------------------------------------
-- DIVU instantiation
----------------------------------------------------------------------------
component DIVU is
generic (width : integer);
Port ( EnableDU : in  STD_LOGIC;
		  Clk : in  STD_LOGIC;
		  Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
		  Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
		  QuotientDU : out  STD_LOGIC_VECTOR (width-1 downto 0);
		  RemainderDU : out  STD_LOGIC_VECTOR (width-1 downto 0));
end component DIVU;

----------------------------------------------------------------------------
-- DIVU signals
----------------------------------------------------------------------------

signal EnableDU : STD_LOGIC;
signal QuotientDU		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal RemainderDU		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');

----------------------------------------------------------------------------
-- DIV instantiation
----------------------------------------------------------------------------
component DIV is
generic (width : integer);
Port ( EnableD : in  STD_LOGIC;
		  Clk : in  STD_LOGIC;
		  Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
		  Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
		  QuotientD : out  STD_LOGIC_VECTOR (width-1 downto 0);
		  RemainderD : out  STD_LOGIC_VECTOR (width-1 downto 0));
end component DIV;

----------------------------------------------------------------------------
-- DIV signals
----------------------------------------------------------------------------

signal EnableD : STD_LOGIC;
signal QuotientD : STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal RemainderD	: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');




----------------------------------------------------------------------------
-- SL_LOGI instantiation
----------------------------------------------------------------------------
component SL_LOGI is
Generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Control_SLL : in  STD_LOGIC;
           Output_SLL : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end component SL_LOGI;

----------------------------------------------------------------------------
-- SL_LOGI signals
----------------------------------------------------------------------------

signal Control_SLL : STD_LOGIC := '0';
signal Output_SLL		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');


----------------------------------------------------------------------------
-- SR_ARITH instantiation
----------------------------------------------------------------------------
component SR_ARITH is
Generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Control_SRA : in  STD_LOGIC;
           Output_SRA : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end component SR_ARITH;

----------------------------------------------------------------------------
-- SR_ARITH signals
----------------------------------------------------------------------------

signal Control_SRA : STD_LOGIC:= '0';
signal Output_SRA		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');



----------------------------------------------------------------------------
-- SR_LOGI instantiation
----------------------------------------------------------------------------
component SR_LOGI is
Generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Control_SRL : in  STD_LOGIC;
           Output_SRL : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end component SR_LOGI;

----------------------------------------------------------------------------
-- SR_LOGI signals
----------------------------------------------------------------------------

signal Control_SRL : STD_LOGIC := '0';
signal Output_SRL		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');

----------------------------------------------------------------------------
-- Signals for MULTI_CYCLE_PROCESS
----------------------------------------------------------------------------
signal Result1_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal Result2_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');
signal Debug_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal done		 			: STD_LOGIC := '0';


begin

-- <port maps>

adder32 : adder generic map (width =>  width) port map (  A=>Operand1, B=>B, C_in=>C_in, S=>S, C_out=>C_out );
--add32 : ADD generic map (width => width) port map ( Operand1=>Operand1, Operand2=>Operand2, Overflow_ADD=>Overflow_ADD, Result_ADD=>Result_ADD, Clk=>Clk);
--sub32 : SUB generic map (width => width) port map ( Operand1=>Operand1, Operand2=>Operand2, Overflow_SUB=>Overflow_SUB, Result_SUB=>Result_SUB, Clk=>Clk);

slt32 : SLT generic map (width => width) port map (Operand1=>Operand1, Operand2=>Operand2,Result_SLT=>Result_SLT, Clk=>Clk);
sltu32 : SLTU generic map (width => width) port map (Operand1=>Operand1, Operand2=>Operand2,Result_SLTU=>Result_SLTU, Clk=>Clk);


multb32 : BOOTH_MULT generic map (width => width) port map ( EnableB=> EnableB, LowerB=>LowerB, UpperB=>UpperB, Operand1=>Operand1, Operand2=>Operand2, Clk=>Clk);
multu32 : MULTU generic map (width => width) port map ( EnableU=> EnableU, LowerU=>LowerU, UpperU=>UpperU, Operand1=>Operand1, Operand2=>Operand2, Clk=>Clk);
divu32 : DIVU generic map (width => width) port map ( EnableDU=> EnableDU, Clk=>Clk, Operand1=>Operand1,Operand2=>Operand2, QuotientDU=>QuotientDU, RemainderDU=>RemainderDU);
div32 : DIV generic map (width => width) port map ( EnableD=> EnableD, Clk=>Clk, Operand1=>Operand1,Operand2=>Operand2, QuotientD=>QuotientD, RemainderD=>RemainderD);
sll32 : SL_LOGI generic map (width => width) port map (Operand1=>Operand1,Operand2=>Operand2, Control_SLL=>Control_SLL, Output_SLL=>Output_SLL, clk=>clk);
sra32 : SR_ARITH generic map (width => width) port map (Operand1=>Operand1,Operand2=>Operand2, Control_SRA=>Control_SRA, Output_SRA=>Output_SRA, clk=>clk);
srl32 : SR_LOGI generic map (width => width) port map (Operand1=>Operand1,Operand2=>Operand2, Control_SRL=>Control_SRL, Output_SRL=>Output_SRL, clk=>clk);



-- </port maps>


----------------------------------------------------------------------------
-- COMBINATIONAL PROCESS
----------------------------------------------------------------------------
COMBINATIONAL_PROCESS : process (
											Control, Operand1, Operand2, state, -- external inputs
											s, Result_add, result_sub, overflow_add, overflow_sub, Result_SLT, Result_SLTU, -- ouput from the adder (or other components)
											Result1_multi, Result2_multi, Debug_multi, done -- from multi-cycle process(es)
											)
begin

-- <default outputs>
Status(2 downto 0) <= "000"; -- both statuses '0' by default 
Result1 <= (others=>'0');
Result2 <= (others=>'0');
Debug <= (others=>'0');

n_state <= state;

B <= Operand2;
C_in <= '0';
-- </default outputs>

--reset
if Control(5) = '1' then
	n_state <= COMBINATIONAL;
else

case state is
	when COMBINATIONAL =>
		case Control(4 downto 0) is
		--and
		when "00000" => 
			Result1 <= Operand1 and Operand2;
		--or
		when "00001" =>
			Result1 <= Operand1 or Operand2;
		--nor
		when "01100" => 
			Result1 <= Operand1 nor Operand2;
		when "00100" =>
			Result1 <= Operand1 xor Operand2;
		--add
		when "00010" =>
			Result1 <= S;
			-- overflow
			Status(1) <= ( Operand1(width-1) xnor  Operand2(width-1) )  and ( Operand2(width-1) xor S(width-1) );
		-- sub
		when "00110" =>
			B <= not(Operand2);
			C_in <= '1';
			Result1 <= S;
			
			
			-- overflow
			if not(((operand1(width-1)='1' and operand2(width-1)='1') and S(width-1)='0') or ((operand1(width-1)='0' and operand2(width-1)='0') and S(width-1)='1')) then
				Status(1) <= '1';
			else
				Status(1) <= '0';
			END IF;
			
			
			
			
			--zero
			if S = x"00000000" then 
				Status(0) <= '1'; 
			else
				Status(0) <= '0';
			end if;

		-- SLT --
		when "00111" =>
			B <= not(Operand2);
			C_in <= '1';
			if S(31) = '1' then 
			result1 <= x"00000001";
			else 
			result1 <= x"00000000";
			end if;
		-- SLTU ---	
		when 	"01110" =>
			B <= not(Operand2);
			C_in <= '1';
			if C_out = '1' then 
			result1 <= x"00000000";
			else 
			result1 <= x"00000001";
			end if;
		-- multi-cycle operations
		when "10000" | "11110" | "10001" | "10011" | "00101" | "01001" | "01101" | "10010" => 
			n_state <= MULTI_CYCLE;
			Status(2) <= '1';
		-- default cases (already covered)
		when others=> null;
		end case;
	when MULTI_CYCLE => 
		if done = '1' then
			Result1 <= Result1_multi;
			Result2 <= Result2_multi;
			Debug <= Debug_multi;
			n_state <= COMBINATIONAL;
			Status(2) <= '0';
		else
			Status(2) <= '1';
			n_state <= MULTI_CYCLE;
		end if;
	end case;
end if;	
end process;


----------------------------------------------------------------------------
-- STATE UPDATE PROCESS
----------------------------------------------------------------------------

STATE_UPDATE_PROCESS : process (Clk) -- state updating
begin  
   if (Clk'event and Clk = '1') then
		state <= n_state;
   end if;
end process;

----------------------------------------------------------------------------
-- MULTI CYCLE PROCESS
----------------------------------------------------------------------------


MULTI_CYCLE_PROCESS : process (Clk) -- multi-cycle operations done here
-- assume that Operand1 and Operand 2 do not change while multi-cycle operations are being performed
variable count : std_logic_vector(7 downto 0) := (others => '0');
variable temp_sum : std_logic_vector(width-1 downto 0) := (others => '0');
begin  
   if (Clk'event and Clk = '1') then 
	done <= '0';
		if n_state = MULTI_CYCLE then
			case Control(4 downto 0) is
			when "10000" =>  -- BOOTH MULTIPLICATION
				if state = COMBINATIONAL then  -- n_state = MULTI_CYCLE and state = COMBINATIONAL implies we are just transitioning into MULTI_CYCLE
					count := (others => '0');
					EnableB <= '1'; 
				end if;												
				
				if count=x"21" then
					EnableB <= '0';
					Result1_multi <= LowerB;
					Result2_multi <= UpperB;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;
			-- -------------------------------------------------------------- ---	
				
			when "10001" => -- MULTU
				if state = COMBINATIONAL then  -- n_state = MULTI_CYCLE and state = COMBINATIONAL implies we are just transitioning into MULTI_CYCLE
					count := (others => '0');
					EnableU <= '1';
				end if;							
				
				if count=x"21" then
					EnableU <= '0';
					Result1_multi <= LowerU;
					Result2_multi <= UpperU;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;
				count := count+1;	
			
			when "10011" => -- DIVU
				if state = COMBINATIONAL then
					count := (others => '0');
					EnableDU <= '1'; 
				end if;												
				
				if count=x"22" then
					EnableDU <= '0';
					Result1_multi <= QuotientDU;
					Result2_multi <= RemainderDU;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;
			
			when "10010" => -- DIV
				if state = COMBINATIONAL then
					count := (others => '0');
					EnableD <= '1'; 
				end if;												
				
				if count=x"21" then
					EnableD <= '0';
					Result1_multi <= QuotientD;
					Result2_multi <= RemainderD;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;	
				
			when "00101" => -- SLL (SHIFT LEFT LOGICAL)
				if state = COMBINATIONAL then
					count := (others => '0');
					Control_SLL <= '1'; 
				end if;												
				
				if count="10" then
					Control_SLL <= '0';
					Result1_multi <= Output_SLL;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;
				
				
			when "01001" => -- SRA (SHIFT RIGHT ARITHMETIC)
				if state = COMBINATIONAL then
					count := (others => '0');
					Control_SRA <= '1'; 
				end if;	
				
				
				if count="10" then
					Control_SRA <= '0';
					Result1_multi <= Output_SRA;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;	
				
				
			when "01101" => -- SRL (SHIFT RIGHT LOGICAL)
				if state = COMBINATIONAL then
					count := (others => '0');
					Control_SRL <= '1'; 
				end if;												
				
				if count="10" then
					Control_SRL <= '0';
					Result1_multi <= Output_SRL;
					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
					done <= '1';	
				end if;				
				count := count+1;		

					
				
			when "11110" => -- takes 2 cycles to execute, just returns the operands
				if state = COMBINATIONAL then
					Result1_multi <= Operand1;
					Result2_multi <= Operand2;
					Debug_multi <= Operand1(width-1 downto width/2) & Operand2(width-1 downto width/2);
					done <= '1';
				end if;
			
				
			when others=> null;
				
			end case;
		
		end if;
	end if;
end process;


end Behavioral;


------------------------------------------------------------------
-- Adder Entity
------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity adder is
generic (width : integer := 32);
port (A 		: in std_logic_vector(width-1 downto 0);
		B 		: in std_logic_vector(width-1 downto 0);
		C_in 	: in std_logic;
		S 		: out std_logic_vector(width-1 downto 0);
		C_out	: out std_logic);
end adder;

------------------------------------------------------------------
-- Adder Architecture
------------------------------------------------------------------

architecture adder_arch of adder is
signal S_wider : std_logic_vector(width downto 0);
begin
	S_wider <= ('0'& A) + ('0'& B) + C_in;
	S <= S_wider(width-1 downto 0);
	C_out <= S_wider(width);
end adder_arch;