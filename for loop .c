# include<stdio.h>
int main ()
{
	int i,sum=0;
	for( i=1;i<11;++i)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf(" the sum is: %d \n",sum);
	return 0;
}
