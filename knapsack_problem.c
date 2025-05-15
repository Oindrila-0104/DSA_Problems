#include <stdio.h>
int main()
{
	float temp, temp1, s;
	float x[20];
	int n,i,j,k;
	printf("\nHow many elements? ");
	scanf("%d", &n);
	struct knap
	{
		int profit;
		int size;
	};
	struct knap a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Profit and Size of elemens #%d\n",i+1);
		scanf("%d%d", &a[i].profit,&a[i].size);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if((a[j].profit/a[j].size)<(a[j+1].profit/a[j+1].size))
			{
				temp=a[j].profit;
				temp1=a[j].size;
				a[j].profit=a[j+1].profit;
				a[j].size=a[j+1].size;
				a[j+1].profit=temp;
				a[j+1].size=temp1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("Profit=%d Size=%d", a[i].profit, a[i].size);
		printf("\n");
	}
	printf("\nEnter size of the bag: \n");
	scanf("%f", &s);
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	}
	float U=s;
	float P=0.0;
	for(i=0;i<n;i++)
	{
		if(a[i].size<=U)
		{
			if(a[i].size==U)
			{
			x[i]=1.0;
			printf("Fracional part taken of element #%d=%f\n",i+1,x[i]);
			U=U-a[i].size;
			P=P+a[i].profit;
			break;
			}
			x[i]=1.0;
			printf("Fracion taken of element #%d=%f\n",i+1,x[i]);
			U=U-a[i].size;
			printf("Remaining size of sack after filling it with element #%d: %f\n", i+1,U);
			P=P+a[i].profit;
			printf("Current profit after filling sack with elements #%d: %f\n",i+1,P);	
		}
		else
		{
			float m=U/(a[i].size);
			x[i]=m;
			printf("Fraction taken of element #%d: %f\n",i+1,x[i]);
			P=P+(x[i]*a[i].profit);
			break;
		}
	}
	printf("Maximum Profit=%f\n",P);
}
