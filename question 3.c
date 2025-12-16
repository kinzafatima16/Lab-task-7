#include<stdio.h>
int main() 
{
int status[15],delay[15],fine[15],total=0,i=0;
printf("Enter payment status (0=not paid,1=paid) and delay(in months):\n");
for(i=0;i<15;i++){
printf("student %d status:",i+1);
scanf("%d",&status[i]);
if(status[i]==0){
printf("delay months:");
scanf("%d",&delay[i]);
}
else
delay[i]=0;
}
for(i=0;i<15;i++)
{
if(status[i]==0)
{
if(delay[i]==1) 
fine[i]=500;
else if(delay[i]>=2)
fine[i]=1000;
else
fine[i]=0;
}
else 
fine[i]=0;
total=total+fine[i];
}
printf("\n%-10s %-10s %-10s %-10s %-10s\n","Student","Status","Delay","Fine","Remark");
for(i=0;i<15;i++)
{
printf("%-10d",i+1);
if(status[i]==1) 
printf("%-10s","Paid");
else
printf("%-10s","Not Paid");
printf("%-10d%-10d",delay[i],fine[i]);
if(status[i]==1)
printf("%-10s\n","Cleared");
else 
printf("%-10s\n","Defaulter");
}
printf("\nTotal Fine: %d",total);
return 0;
}

