----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:26:48 10/01/2014 
-- Design Name: 
-- Module Name:    SLT - SLT_ARCH 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_Arith.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SLT is
 generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (31 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (31 downto 0);
           --Control_SLT : in  STD_LOGIC;
           Result_SLT : out  STD_LOGIC_VECTOR (31 downto 0);
			  Clk : in  STD_LOGIC);
end SLT;

architecture SLT_ARCH of SLT is

begin

process(Operand1, Operand2)

variable diff : STD_LOGIC_VECTOR (31 downto 0) := (others => '0');
variable temp_result: STD_LOGIC_VECTOR (31 downto 0) := (others => '0');
begin

--if (clk'event and clk='1') then
	--if (Control_SLT = '1') then
		diff := Operand1 - Operand2;
		if (diff(31) = '1') then
			temp_result := "00000000000000000000000000000001"; --Op1<Op2
		else
			temp_result := "00000000000000000000000000000000"; --Op1>Op2
		end if;
	--end if;
	result_slt <= temp_result;
--end if;

end process;
end SLT_ARCH;

