----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:42:53 10/01/2014 
-- Design Name: 
-- Module Name:    ADD - ADD_ARCH 
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

entity ADD is
 generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Overflow_add : out STD_LOGIC;
           Result_ADD : out  STD_LOGIC_VECTOR (width-1 downto 0);
			  Clk : in  STD_LOGIC);
end ADD;

architecture ADD_ARCH of ADD is

signal temp : STD_LOGIC_VECTOR (width downto 0);

begin

process(operand1, operand2, temp)

begin
--if (clk'event and clk='1') then
	temp <= ('0' & operand1) + ('0' & operand2);
	if temp(width) = '1' then
		overflow_add <= '1';
	end if;
result_add <= temp(width-1 downto 0);	
--end if;	
end process;



end ADD_ARCH;

