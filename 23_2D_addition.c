#include <stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,a[50][50],b[50][50],f[50][50]={0};
	printf("\nEnter number of rows: ");
	scanf("%d", &r1);
	printf("\nEnter number of columns: ");
	scanf("%d", &c1);
	printf("\nEnter array elements: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nMatrix 1: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter number of rows: ");
	scanf("%d", &r2);
	printf("\nEnter number of columns: ");
	scanf("%d", &c2);
	printf("\nEnter array elements: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nMatrix 2: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf(" %d", b[i][j]);
		}
		printf("\n");
	}
	if(r1==r2 && c1==c2)
	{
		printf("\nAddition of matrices: \n");
		for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c2;j++)
		    {
		    	f[i][j]=f[i][j]+a[i][j]+b[i][j];
			    printf(" %d", f[i][j]);
		    }
		printf("\n");
	    }
	}
	else
	{
		printf("\nInvalid");
	}
	return 0;
}
