#include<stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	while(n!=0)
		{
		if(n%2==0)
		{
		for(j=0;j<m-1;j++)
			printf("*\t");
		}
		else
		for(j=0;j<m;j++)
		printf("*\t");
n--;
printf("\n");
}

return 0;
	
}
