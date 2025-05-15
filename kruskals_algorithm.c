#include<stdio.h>
int i,j,a,b,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int i)
{
    while(parent[i]!=i)
    {
        i=parent[i];
    }
    return i;
}
void uni(int i,int j)
{
    int a=find(i);
    int b=find(j);
    parent[a]=b;
}
int main()
{
    printf("Enter the number of vertices: ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
    }
	printf("\nEnter the cost of adjacency matrix: \n");
	for(i=1;i<=n;i++)
	{
		int c=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	printf("\nThe edges of Minimum cost spanning tree are:\n");
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(find(i)!=find(j) && cost[i][j]<min)
				{
					min=cost[i][j];
					a=i;
					b=j;
				}
			}
		}
		uni(a,b);
		printf("\n%d edge(%d,%d) =%d\n",ne++,a,b,min);
		mincost=mincost+min;
	}

	printf("\nMinimum cost= %d",mincost);
}
