#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	int i,a[50],lw,j,pos,c;
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
		pos=i;
		lw=a[i];
		for(j=pos+1;j<=n;j++)
		{
			if(lw>a[j])
			{
				lw=a[j];
				pos=j;
			}
		}
		c=a[i];
		a[i]=lw;
		a[pos]=c;
	}
	printf("\nSorted Array: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
