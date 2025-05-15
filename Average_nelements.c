#include <stdio.h>
int main()
{
	int n,i,a[50],sum=0,avg=0;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter array elements: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nArray: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nAverage of the %d elements is %d.", n, avg);
	return 0;
}
