#include <stdio.h>
 int funct(int n)
{
 int m=20;
 n=m; 
 return n;
}
 int main()
{
  int n=30; 
  printf("This is designed by priyansh vijay\n");
  printf("%d\n", funct(n));
  printf("%d\n", n); 
  return 0;
}
