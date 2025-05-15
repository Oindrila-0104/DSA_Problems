#include <stdio.h>
int partition(int a[], int p, int r)
{
	int x,j,c,t,i;
	i=p;
	x=a[p];
	for(j=p+1;j<=r;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	t=a[p];
	a[p]=a[i];
	a[i]=t;
	return i;
}
void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}
int main()
{
	int n;
	printf("\nEnter the number of terms: ");
	scanf("%d", &n);
	int a[50],i;
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
	int p=1;
	int r=n;
	quicksort(a,p,r);
	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
