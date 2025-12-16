#include<stdio.h>
int main ()
{
	int post[10],i,j=0,high_act,flag=0,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the number of posts made on day %d :",i+1);
		scanf("%d",&post[i]);
		printf("\n");
	}
		for(i=0;i<10;i++){
			sum=sum+post[i];
		}
		for(i=0;i<10;i++){
		if(post[i]>j)
		{
			j=post[i];
	high_act=i+1;
	}
	}
	for(i=0;i<8;i++)
	{
		if(post[i]<post[i+1]&&post[i+1]<post[i+2])
		flag++;
	}
	
	printf("The day with the highest activity is:%d",high_act);
	printf("\nThe average of daily activity is:%d",sum/10);
	printf("\nNumber of streaks: %d",flag);
	return 0;
}
