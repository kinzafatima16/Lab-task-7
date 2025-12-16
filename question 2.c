#include<stdio.h>
int main  ()
{
	int ward[7],flag=0,i=0,sum=0;
	for(i=0;i<7;i++)
	{
		printf("please enter the number of patients inn ward %d : ",i+1);
		scanf("%d",&ward[i]);
		
	}
		for(i=0;i<7;i++)
	{
		if(ward[i]>10)
		printf("\nstatus of ward %d : Overcrowded ",i+1);
		else if(ward[i]>=6&&ward[i]<10)
		printf("\nstatus of ward %d : Stable ",i+1);
		else if(ward[i]<6)
		printf("\nstatus of ward %d : Underutilized",i+1);
	}
		for(i=0;i<7;i++)
	{
	sum=sum+ward[i];					
	}
	printf("\nThe total number of patients in the hospital is:%d",sum);
	printf("\nwards that need administrative review : ");
	for(i=0;i<7;i++)
	{
	if(ward[i]>10||ward[i]<6)
	 printf("\nward %d :(Occupancy: %d)\n",i+1,ward[i]);
    flag= 1;
	}
	if(flag==0)
	printf("None");
	return 0;
}
