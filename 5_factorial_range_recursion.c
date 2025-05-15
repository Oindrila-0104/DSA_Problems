#include <stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n,i;
	printf("\nEnter number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("\nFactorial of %d is %d", i,fact(i));
	}
	return 0;
}
