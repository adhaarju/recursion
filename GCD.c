#include<stdio.h>
int GCD (int ,int);
int main()
{
	int num1,num2,result;
	printf("enter your two  numbers:");
	scanf("%d%d",&num1,&num2);
	result=GCD(num1,num2);
	printf("GCD of %d and %d is %d ",num1,num2,result);
	return 0;
}
int GCD(int a,int b)
{
 if(b==0)
 return a;
 else
 return GCD(b,a%b);	
}
