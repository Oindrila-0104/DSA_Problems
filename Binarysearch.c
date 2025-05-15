#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int i,a[50],lw=0,f=0,mid,up=n-1,m;
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
	printf("\nEnter the element to be searched: ");
	scanf("%d", &m);
	while(lw<=up)
	{
		mid=(lw+up)/2;
		if(a[mid]==m)
		{
			f=1;
			break;
		}
		if(a[mid]<m)
		{
			lw=mid+1;
		}
		else
		{
			up=mid-1;
		}
	}
	if(f==1)
	{
		printf("\nElement found and the position is %d", mid);
	}
	else
	{
		printf("\nElement not found");
	}
	return 0;
}
