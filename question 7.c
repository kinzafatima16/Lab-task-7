#include<stdio.h>
int main ()
{
	int mile[8],flag=0,i;
	for(i=0;i<8;i++)
	{
	printf("Enter the number of mileage of of car %d:",i+1);
	scanf("%d",&mile[i]);
	if(mile[i]>=18)
	printf("status:efficient\n");
	else if(mile[i]>=12&&mile[i]<=17)
	printf("status:average\n");
	if(mile[i]<12)
		printf("status:Need maintenance\n");
		flag++;
	}
	if(flag>3)
	printf("FLEET EFFICENCY ALERT!!");
return 0;
}
