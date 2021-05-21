#include<stdio.h>
int main()
{
	printf("This logical operators present by PRIYANSH VIJAY.\n");
	printf("# first (AND operator).\n");
	int a=6,b=6,c=10,result;
	
	result=(a==b)&&(c>b);
	printf("(a==b)&&(c>b) is %d \n",result);
	
	//with logical AND operator both condition must true.
	
	result=(a==b)&&(c<b);
	printf("(a==b)&&(c<b) is %d \n",result); 
	 
	printf("# second (OR operator).\n"); 
	 
	result=(a==b)||(c<b);
	printf("(a==b)||(c<b) is %d \n",result);
	
	//with logical OR operator one comdition must true.
	
	result=(a!=b)||(c<b);
	printf("(a!=b)||(c<b) is %d \n",result);
	 
	printf("# third (NOT OPERATOR).\n");
	
	result=!(a!=b);
	printf("!(a!=b) is %d \n",result);
	
	//with logical NOT operator inner output should be 0(false) to get 1(true).
 

	result=!(a==b);
	printf("!(a==b) is %d \n",result);
	
	return 0;
}
