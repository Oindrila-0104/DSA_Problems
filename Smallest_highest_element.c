#include <stdio.h>
int main()
{
	int n,i,a[50],lw,up,pos1,pos2,j,c;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
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
	lw=a[1];
	up=a[1];
	for(j=0;j<n;j++)
	{
		if(a[j]<lw)
		{
			lw=a[j];
			pos1=j;
		}
		if(a[j]>up)
		{
			up=a[j];
			pos2=j;
		}
	}
	printf("\nSmallest element is %d, position is %d.", lw,pos1);
	printf("\nHighest element is %d, position is %d.", up,pos2);
	c=a[pos1];
	a[pos1]=a[pos2];
	a[pos2]=c;
	printf("\nNew Array: ");
	for(i=0;i<n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
