#include <stdio.h>
int main()
{
  int a,b;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  
  // swapping
  // a =(initial_a-initial_b)
  a=a-b;
  printf("value after a-b=%d,a");
  // b =(initial_a-initial_b)+initial_b
  b=a+b;
  // a =(initial_a-initial_b)*initial_b
  a=a*b
  
  printf("after swapping,a=%d",&a);
  printf("after swapping,b=%d",&b);
  
  return 0;
  
  }
