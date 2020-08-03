/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n1;
  printf ("Insira um número: ");
  scanf ("%d", &n1);

  if (n1 > 10)
    {
      printf ("O número é maior que 10");
    }
  else
    {
      printf ("O número é menor que 10");
    }


  return 0;
}
