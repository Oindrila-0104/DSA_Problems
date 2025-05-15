#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binary_search(int a[],int lw,int up,int m)
{
	int mid;
	if(lw<=up)
	{
		mid=(lw+up)/2;
		if(a[mid]==m)
		return mid;
		else if(a[mid]<m)
		return binary_search(a,mid+1,up,m);
		else
		return binary_search(a,lw,mid-1,m);
	}
	else
	return -1;
}
int main()
{
	time_t start,end;
	start=time(NULL);
	int a[10],i,lw,up,j,k,m,result;
	int n=10;
	for(i=0;i<n;i++)
	{
		a[i]=(rand()%(1000-1+1))+1;
	}
	printf("\nUnsorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	printf("\nSorted array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d", &m);
	lw=0;
	up=n-1;
	result=binary_search(a,lw,up,m);
	if(result==-1)
	printf("\nElement not found");	
	else
	printf("\nElement %d found at index %d",m,result+1);
	end=time(NULL);
	printf("\n%f s", ((double)(end-start))/CLOCKS_PER_SEC);
}
