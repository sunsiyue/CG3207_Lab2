----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:00:27 10/01/2014 
-- Design Name: 
-- Module Name:    SUB - SUB_ARCH 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SUB is
  generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Overflow_sub : out STD_LOGIC;
           Result_SUB : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end SUB;

architecture SUB_ARCH of SUB is

signal temp : STD_LOGIC_VECTOR (width-1 downto 0);

begin

process(Operand1, Operand2)
variable temp_sum : STD_LOGIC_VECTOR (width-1 downto 0);

begin
--if (clk'event and clk='1') then
	result_sub <=  operand1 +  (not operand2 + 1);
	temp_sum := operand1 + operand2;
	if not(((operand1(31)='1' and operand2(31)='1') and temp_sum(31)='0') or ((operand1(31)='0' and operand2(31)='0') and temp_sum(31)='1')) then
		Overflow_sub <= '1';
	else
		Overflow_sub <= '0';
	END IF;
--	result_sub <= temp(width-1 downto 0);	
--end if;	
end process;


end SUB_ARCH;

