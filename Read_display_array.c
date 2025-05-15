#include <stdio.h>
int main()
{
	int n,i,a[50];
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
	printf("\nPrint alternate elements:");
	{
		for(i=0;i<n;i++){
		if(i%2==0)
		printf(" %d", a[i]);}
	}
	return 0;
}
