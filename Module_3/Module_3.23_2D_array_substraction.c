#include<stdio.h>
main()
{
	int i,j,a1[3][3],a2[3][3],substraction[i][j];
	
	
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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a1[i][j]);
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

		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a2[i][j]);
    	}
		printf("\n"); 
	}
	

printf("\n..............substraction.............\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   substraction[i][j]=a1[i][j]-a2[i][j];
		}
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   printf(" %d",substraction[i][j]);
		}
		printf("\n");
	}
	
	
}
