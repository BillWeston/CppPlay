#include <iostream>
#include <iostream>

// Program to calculate the greatest common divisor of two numbers 
// input from the command line
// output to stdout.

// Playing with this in debugger.
int main(int argc, char** argv)
{
  int gcd = 0;
  int remainder = 0;
  int old_remainder;

  while (argc-->0)
    { 
      remainder = abs(atoi(argv[argc]));
      while (remainder)
	{
	  old_remainder = remainder; 
	  remainder = gcd % remainder;
	  gcd = old_remainder;
	}
    }
  std::cout << gcd << std::endl;
  return remainder;
}

Process gdb-inferior killed: 9
