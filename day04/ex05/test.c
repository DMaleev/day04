/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int
ft_sqrt (int nb)
{
  if (nb <= 0)
    return 0;
    
  int x = nb / 2;
  int max = 0;
  
  
  while (x * x != nb)
    {
    if (x * x > nb || x * x < 0)
	{
	  max = x * x;
	  x = x / 2;
	}
      if (x * x < nb && x*x > 0)
	{
	  while (x * x != max)
	    {
	      if (x * x == nb)
		{
		  return x;
		}
	      x++;
	    }
	  return 0;
	}
    }
}

int
main ()
{
  printf ("  %d", ft_sqrt (123454321));
  return 0;
}
