#include <stdio.h>
int main()
{
	int n,i,a[50],j,count;
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
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				count=1;
			}
		}
	}
	if(count==1)
	printf("\nDuplicate element found.");
	else
	printf("\nDuplicate element not found.");
	return 0;
}
