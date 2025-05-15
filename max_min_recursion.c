#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long long int a[100000];
void maxmin(long long int a[],int fp,int lp,int *min,int *max)
{
	int min1,max1,min2,max2,mp;
	if(fp==lp)
	{
		*max=a[fp];
		*min=a[fp];
	}
	else if(fp+1==lp)
	{
		if(a[fp]<=a[lp])
		{
			*max=a[lp];
			*min=a[fp];
		}
		else
		{
			*max=a[fp];
			*min=a[lp];
		}
	}
	else
	{
		mp=(fp+lp)/2;
		maxmin(a,fp,mp,&min1,&max1);
		maxmin(a,mp+1,lp,&min2,&max2);
		if(min1<min2)
		*min=min1;
		else
		*min=min2;
		if(max1>max2)
		*max=max1;
		else
		*max=max2;
	}

}

int main()
{
    time_t start,end;
    start=time(NULL);
	int i,min,max;
	long long int n=100000;
	for(i=0;i<n;i++)
	{
	    a[i]=(rand()%(1000-1+1))+1;
	}
	printf("The array taken is:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	maxmin(a,0,n-1,&min,&max);
	printf("\nThe minimum and maximum elements are %d and %d respectively",min,max);
	end=time(NULL);
	printf("\n%f s",((double)(end -start))/CLOCKS_PER_SEC);
}
