#include<stdio.h>
int main ()
{
	printf(" This relational operator coding by PRIYANSH VIJAY.\n");
	int a=3,b=3,c=7;
	
	printf("%d==%d is %d \n",a,b,a==b);
	printf("%d==%d is %d \n",a,c,a==c);
	printf("%d<%d is %d \n" ,a,b,a<b);
	printf("%d<%d is %d \n",a,c,a<c);
	printf("%d>%d is %d \n",a,b,a>b);
	printf("%d>%d is %d \n",a,c,a>c);
	printf("%d!=%d is %d \n",a,b,a!=b);
	printf("%d!=%d is %d \n",a,c,a!=c);
	printf("%d<=%d is %d \n",a,b,a<=b);
	printf("%d<=%d is %d \n",a,c,a<=c);
	printf("%d>=%d is %d \n",a,b,a>=b);
	printf("%d>=%d is %d \n",a,c,a>=c);
	
	return 0;
	
}
