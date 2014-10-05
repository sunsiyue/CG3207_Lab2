--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:45:06 10/01/2014
-- Design Name:   
-- Module Name:   C:/CG3207/Lab2/ADD_TEST.vhd
-- Project Name:  Lab2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ADD
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ADD_TEST IS
END ADD_TEST;
 
ARCHITECTURE behavior OF ADD_TEST IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ADD
    PORT(
         Operand1 : IN  std_logic_vector(31 downto 0);
         Operand2 : IN  std_logic_vector(31 downto 0);
         Overflow_add : IN std_logic;
         Result_ADD : OUT  std_logic_vector(31 downto 0);
			Clk : IN std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Operand1 : std_logic_vector(31 downto 0) := (others => '0');
   signal Operand2 : std_logic_vector(31 downto 0) := (others => '0');
   signal overflow_add : std_logic;
	signal Clk : std_logic := '0';


 	--Outputs
   signal Result_ADD : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADD PORT MAP (
          Operand1 => Operand1,
          Operand2 => Operand2,
          Overflow_add => Overflow_add,
          Result_ADD => Result_ADD,
			 Clk => Clk
        );

   -- Clock process definitions
  Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		Operand1 <= "00000000000000000000000000000001";
		Operand2 <= "00000000000000000000000000000010";
		

      --wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
