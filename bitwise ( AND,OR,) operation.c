#include<stdio.h>
int main()
{
	printf("This bitwise (AND,OR,XOR) operator coding made by PRIYANSH VIJAY.\n");
	printf(" first bitwise AND opeator use.\n");
	
	int a,b,c;
	scanf("%d,%d,&a,&b");
	printf("the value of a:%d and the value of b:%d\n",a,b);
	c=a&b;
	printf("bitwise AND operation between a and b, the output is: %d\n",c);
	
	printf(" second bitwise OR operator use.\n");
	
	scanf("%d%d,&a,&b");
	printf("the value of a:%d and the value of b:%d\n ",a,b);
	c=a||b;
	printf("bitwise OR operation between a and b, the output is :%d\n",c);
	 
	return 0; 
}
