----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:44:04 09/26/2014 
-- Design Name: 
-- Module Name:    MULT - MULT_ARCH 
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MULT is
   Port ( Enable : in STD_LOGIC := '0';
			 Lower : out  STD_LOGIC_VECTOR (width-1 downto 0);
			 Upper : out  STD_LOGIC_VECTOR (width-1 downto 0);
			 Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
			 Sum : in  STD_LOGIC_VECTOR (2*width-1 downto 0);
			 Clk : in STD_LOGIC);
end MULT;

architecture MULT_ARCH of MULT is

begin

process (Clk, Enable) 
variable result : std_logic_vector(width-1 downto 0) := (others => '0');
variable temp_sum : std_logic_vector(width*2-1 downto 0) := (others => '0');
variable count : STD_LOGIC (7 downto 0) := (others => '0');

begin
if Enable = '1' then
	if clk'event and clk = '1' then
	  if count = (others => '0') then
		 temp_sum := sum;
	  end if;
		result := temp_sum(2*width-2 downto width) + Operand1(width-2 downto 0); 
		if (temp_sum(0) = '1') then
		  temp_sum(width*2-2 downto width) <= result (width-2 downto 0);
		end if;
	  temp_sum <= temp_sum srl 1;
	  count := count + 1;  
	end if;
	else
	count := (others => '0');
end if;

end process;

Upper <= temp_sum(2*width-1 downto width);
Lower <= temp_sum (width-1 downto 0);

end MULT_ARCH;
