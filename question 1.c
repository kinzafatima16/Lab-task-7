#include<stdio.h>
int main ()
{
	float pro[10],sum=0;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("price of product %d: ",i+1);
		scanf("%f",&pro[i]);
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
	if (pro[i]<1000)
	pro[i]=pro[i]*0.95;
	else if(pro[i]>=1000&&pro[i]<5000)
	pro[i]=pro[i]*0.90;
	else if(pro[i]>5000)
	pro[i]=pro[i]*0.85;
	}
		for(i=0;i<10;i++)
		{
		sum=sum+pro[i];
		}
	printf("Your total is : %.2f ",sum);
	if(sum>25000)
	printf("\nYou won a golden voucher");
	
}
