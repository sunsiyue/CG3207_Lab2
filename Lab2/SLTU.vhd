----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:08:39 10/01/2014 
-- Design Name: 
-- Module Name:    SLTU - SLTU_ARCH 
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

entity SLTU is
generic (width : integer := 32);
    Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
           --Control_SLTU : in  STD_LOGIC;
           Result_SLTU : out  STD_LOGIC_VECTOR (width-1 downto 0);
           Clk : in  STD_LOGIC);
end SLTU;

architecture SLTU_ARCH of SLTU is

begin

process(Operand1, Operand2)

variable temp_result: STD_LOGIC_VECTOR (31 downto 0) := (others => '0');

begin

	--if (clk'event and clk='1') then
		--if (Control_SLTU = '1') then
			if (Operand1 < Operand2) then
			temp_result := "00000000000000000000000000000001";
			else
			temp_result := "00000000000000000000000000000000";
			end if;
		--end if;
		
	result_SLTU <= temp_result;	
	--end if;
end process;



end SLTU_ARCH;

