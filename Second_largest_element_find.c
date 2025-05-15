#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int i,a[50],j,c,k;
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
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	printf("\nSecond largest element in the array is %d.", a[n-2]);
	return 0;
}
