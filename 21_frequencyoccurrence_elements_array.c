#include <stdio.h>
int main()
{
	int n,i,a[50],j,c1,c2,no,z;
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
		c1=0;
		no=a[i];
		c2=0;
		for(z=i;z>=1;z--)
		{
			if(a[z]==no)
			{
				c2++;
			}
		}
		if(c2==1)
		{
			for(j=1;j<=n;j++)
			{
				if(a[j]==no)
				{
					c1++;
				}
			}
			if(c1>1)
			{
				printf("\nFrequency of %d is %d.", no, c1);
			}
		}
	}
	return 0;
}
