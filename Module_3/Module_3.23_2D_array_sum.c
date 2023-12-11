#include<stdio.h>
main()
{
	int i,j,a1[3][3],a2[3][3],sum[3][3];
	
	
	printf("\n................array-1.................");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\n\n\t INPUT ELEMENT  [%d] [%d] :",i,j);
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n................array-2.................");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("\n\n\t INPUT ELEMENT  [%d] [%d] :",i,j);
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n................sum.................");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    sum[i][j]=a1[i][j]+a2[i][j];
		}	
	}
		printf("\n..............sum of two array............\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sum[i][j]);
	
		} 
		printf("\n");
	}
}
