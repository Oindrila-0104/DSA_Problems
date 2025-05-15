#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int i,a[50],m;
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
	printf("\nEnter the element to be searched: ");
	scanf("%d", &m);
	for(i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			printf("\nElement found and the position is %d.", i);
			break;
		}
	}
	if(i>=n)
	{
		printf("\nElement not found.");
	}
	return 0;
}
