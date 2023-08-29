#include<stdio.h>
int main()
{
	int n,a[20],b[20],i,j,count=0;
	printf("enter no of array:");
	scanf("%d",&n);
	printf("enter elements (1 or 2):");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			printf("%d",a[i]);
		}
		else if(a[i]==1)
		{
			printf("%d",a[i]);
			count++;
			if(count==5)
			{
				printf("0");
			}
		}
	}
}
