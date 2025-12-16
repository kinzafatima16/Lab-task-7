#include<stdio.h>
int main ()
{
	int invg[6],stu[6]={30,53,45,67,45,29},sum_stu,sum_invg,i;
	for(i=0;i<6;i++)
	{
		if(stu[i]<=30)
		invg[i]=1;
		else if(stu[i]>30&&stu[i]<=60)
		invg[i]=2;
		if(stu[i]>60)
		invg[i]=3;
	}
		for(i=0;i<6;i++){
		sum_invg=sum_invg+stu[i];
	}
		for(i=0;i<6;i++){
	printf("the number of invigilator assigned to section %d : %d",i+1,invg[i]);
	printf("\n");
	}
	printf("the total sum of all the invigilators assigned: %d",sum_invg);
		for(i=0;i<6;i++)
		{
		sum_stu=sum_stu+stu[i];
	}
		if(sum_stu>300)
	printf("\nA chief invigilator will be assigned");
}
