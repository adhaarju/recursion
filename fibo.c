#include<stdio.h>
int fibo(int);
int main()
{
	int num,result,i;
	printf("enter your number: ");
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		printf("%d ",fibo(i));
	}
	
	return 0;
}
int fibo(int n)
{
	if(n==1||n==0)	
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}

