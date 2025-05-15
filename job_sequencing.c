#include <stdio.h>
int main()
{
	int i,j,n,max,a[50],index;
	float p=0;
	struct job_seq
	{
		int jnum;
		float profit;
		float deadline;
	};
	struct job_seq job[50],temp;
	printf("\nEnter the number of jobs: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		job[i].jnum=i;
	}
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the profit and deadline of each job: ");
		scanf("%f %f", &job[i].profit, &job[i].deadline);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if((job[j].profit)<(job[j+1].profit))
			{
				temp=job[j];
				job[j]=job[j+1];
				job[j+1]=temp;
			}
		}
	}
	printf("\nThe profit and deadline of each element in decreasing order w.r.t profit are: \n");
	for(i=1;i<=n;i++)
	{
		printf("Job %d: Profit = %f, Deadline = %f\n", job[i].jnum,job[i].profit,job[i].deadline);
	}
	max=job[1].deadline;
	for(i=1;i<=n;i++)
	{
		if(job[i].deadline>max)
		max=job[i].deadline;
	}
	for(i=1;i<=max;i++)
	{
		a[i]=-1;
	}
	for(i=1;i<=n;i++)
	{
		index=job[i].deadline;
		if(a[index]==-1)
		{
			a[index]=job[i].jnum;
			p=p+job[i].profit;
		}
		else
		{
			while(index>0 && a[index]!=-1)
			{
				index--;
			}
			if(index>0)
			{
				a[index]=job[i].jnum;
				p=p+job[i].profit;
			}
		}
	}
	printf("Job sequence: \n");
	for(i=1;i<=max;i++)
	{
		printf("Job %d ",a[i]);
	}
	printf("\nMaximum profit: %f",p);
}
