----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:17:59 09/30/2014 
-- Design Name: 
-- Module Name:    SLL - SLL_ARCH 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SLL is   
generic (width : integer := 32);
 Port ( Operand1 : in  STD_LOGIC_VECTOR (width-1 downto 0);
        Operand2 : in  STD_LOGIC_VECTOR (width-1 downto 0);
        Control_SLL : in  STD_LOGIC;
        Output_SLL : out  STD_LOGIC_VECTOR (width-1 downto 0));

end SLL;

architecture SLL_ARCH of SLL is

begin



end SLL_ARCH;

