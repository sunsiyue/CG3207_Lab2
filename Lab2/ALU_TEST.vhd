--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   07:34:49 10/01/2014
-- Design Name:   
-- Module Name:   C:/CG3207/Lab2/ALU_TEST.vhd
-- Project Name:  Lab2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ALU_TEST IS
END ALU_TEST;
 
ARCHITECTURE behavior OF ALU_TEST IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         Clk : IN  std_logic;
         Control : IN  std_logic_vector(5 downto 0);
         Operand1 : IN  std_logic_vector(31 downto 0);
         Operand2 : IN  std_logic_vector(31 downto 0);
         Result1 : OUT  std_logic_vector(31 downto 0);
         Result2 : OUT  std_logic_vector(31 downto 0);
         Status : OUT  std_logic_vector(2 downto 0);
         Debug : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal Control : std_logic_vector(5 downto 0) := (others => '0');
   signal Operand1 : std_logic_vector(31 downto 0) := (others => '0');
   signal Operand2 : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal Result1 : std_logic_vector(31 downto 0);
   signal Result2 : std_logic_vector(31 downto 0);
   signal Status : std_logic_vector(2 downto 0);
   signal Debug : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant Clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          Clk => Clk,
          Control => Control,
          Operand1 => Operand1,
          Operand2 => Operand2,
          Result1 => Result1,
          Result2 => Result2,
          Status => Status,
          Debug => Debug
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

      Control <= "000010";
      Operand1 <= x"80000000";
      Operand2 <= x"F000000F";
		
		wait for 300 ns;
		
      Control <= "000110";
      Operand1 <= x"70000000";
      Operand2 <= x"EFFFFFF1";
		
		wait for 300 ns;
		
		Control <= "000110";
      Operand1 <= x"80000000";
      Operand2 <= x"80000001";
		
		wait for 300 ns;

      Control <= "000111"; --slt
      Operand2 <= x"60000000";
      Operand1 <= x"70000000";
		
		wait for 300 ns;

      Control <= "000111"; --slt
      Operand2 <= x"70000000";
      Operand1 <= x"60000000";
		
		wait for 300 ns;

      Control <= "001110"; --sltu
      Operand2 <= x"70000000";
      Operand1 <= x"60000000";
		
		wait for 300 ns;

      Control <= "001110"; --sltu
      Operand1 <= x"70000000";
      Operand2 <= x"60000000";

		wait for 300 ns;	

      Control <= "010000";
      Operand2 <= x"00000007";
      Operand1 <= x"00000009";
		
		
		wait for 3400 ns;
		
		Control <= "010010";
      Operand1 <= not(x"00000009") + 1;
		Operand2 <= x"00000004";
		
		wait for 3500 ns;
		
		Control <= "001101";
      Operand1 <= x"00000008";
		Operand2 <= x"00000002";
		
		
		
      wait;
		
		
		
   end process;

END;
