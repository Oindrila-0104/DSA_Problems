#include <stdio.h>
int fibo(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;
	int a=0, i;
	printf("\nEnter the number of terms: ");
	scanf("%d", &n);
	printf("%d", a);
	for(i=1;i<=n;i++)
	{
		printf("\n%d", fibo(i));
	}
	return 0;
}
