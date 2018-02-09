#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(".\t");
		}
		for(j=0;j<i;j++)
		{
			printf("%d\t",k);
		}
		k++;
		printf("\n");
		
	}
	return 0;
}
