#include <stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
int main()
{
	int n;
	printf("\nEnter natural number: ");
	scanf("%d", &n);
	printf("\nSum of %d natural number is %d.", n, sum(n));
	return 0;
}
