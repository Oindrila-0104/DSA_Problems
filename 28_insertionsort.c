#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int i,a[50],j,c;
	printf("\nEnter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nArray: ");
	for(i=0;i<n;i++)
	{
		printf(" %d", a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(a[j-1]>a[j])
			{
				c=a[j-1];
				a[j-1]=a[j];
				a[j]=c;
			}
		}
	}
	printf("\nSorted Array: ");
	for(i=0;i<n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
