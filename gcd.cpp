#include <iostream>
#include <iostream>

// Program to calculate the greatest common divisor of two numbers 
// input from the command line
// output to stdout.
int main(int argc, char** argv)
{
  int gcd = 0;
  int remainder = -666;
  int old_remainder;

  if (argc > 2)
    {
      gcd = abs(atoi(argv[1])); 
      remainder = abs(atoi(argv[2]));
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
