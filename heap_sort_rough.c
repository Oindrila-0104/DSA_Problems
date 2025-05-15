#include <stdio.h>
#include <time.h>
void min_heapfy(int n,int a[],int i)
{
	int l,r,smallest,c;
	l=2*i;
	r=2*i+1;
	if(l<=n && a[l]<a[i])
	{
		smallest=l;
	}
	else
	{
		smallest=i;
	}
	if(r<=n && a[r]<a[smallest])
	{
		smallest=r;
	}
	if(smallest!=i)
	{
		c=a[i];
		a[i]=a[smallest];
		a[smallest]=c;
		min_heapfy(n,a,smallest);
	}
}
void build_minheap(int n,int a[])
{
	int i;
	for(i=n/2;i>=1;i--)
	{
		min_heapfy(n,a,i);
	}
}
void heapsort(int n,int a[])
{
	int i,c;
	build_minheap(n,a);
	for(i=n;i>=2;i--)
	{
		c=a[1];
		a[1]=a[i];
		a[i]=c;
		n=n-1;
		min_heapfy(n,a,1);
	}
}
int main()
{
	time_t start, end;
	start=time(NULL);
	int n=10,a[10];
	int i;
	for(i=1;i<=n;i++)
	{
		a[i]=(rand()%(1000-1+1))+1;
	}
	printf("\nUnsorted array: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	heapsort(n,a);
	printf("\nSorted array: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	end=time(NULL);
	printf("\n%f s",((double)(end-start))/CLOCKS_PER_SEC);
	return 0;
}
