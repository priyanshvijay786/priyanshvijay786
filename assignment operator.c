#include<stdio.h>
int main()
{
	printf(" # This assignment operator code by PRIYANSH VIJAY.\n");
	int a=7,c;
	c=a; 
	// c is 7
	printf("c=%d \n",c);
	c+=a;
	//c is 14
	printf("c=%d \n",c);
	c-=a;
	//c is 7
	printf("c=%d \n",c);
	c*=a;
	//c is 49
	printf("c=%d \n",c);
	c%=a;
	//c is 7
	printf("c=%d \n",c);
	
	return 0;
}
