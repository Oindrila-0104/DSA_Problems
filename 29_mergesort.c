#include <stdio.h>
void merge(int a[], int p, int q, int r)
{
	int n1, n2;
	n1=q-p+1;
	n2=r-q;
	int i,j,k;
	int l[50], u[50];
	for(i=1;i<=n1;i++)
	{
		l[i]=a[p+i-1];
	}
	for(j=1;j<=n2;j++)
	{
		u[j]=a[q+j];
	}
	l[n1+1]=999999;
	u[n2+1]=999999;
	i=1;
	j=1;
	for(k=p;k<=r;k++)
	{
		if(l[i]<=u[j])
		{
			a[k]=l[i];
			i=i+1;
		}
		else
		{
			a[k]=u[j];
			j=j+1;
		}
	}
	
}
void mergesort(int a[], int p, int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
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
	mergesort(a,p,r);
	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
