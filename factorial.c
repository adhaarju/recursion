#include<stdio.h>
long fact(int);
int main()
{
	int num,result;
	printf("enter your integer: ");
	scanf("%d",&num);
	result=fact(num);
	printf("the factorial of %d is %d",num,result);
	return 0;
}
long fact (int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
