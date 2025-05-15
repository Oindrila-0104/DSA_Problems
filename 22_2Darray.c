#include <stdio.h>
int main()
{
	int r,c,i,j,a[50][50];
	printf("\nEnter number of rows: ");
	scanf("%d", &r);
	printf("\nEnter number of columns: ");
	scanf("%d", &c);
	printf("\nEnter array elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nArray: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
