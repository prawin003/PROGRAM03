#include<stdio.h>
void main()
{
int t,n,sum=0,r,d;
printf("enter a num");
scanf("%d",&n);
t=n;
for(i=1;i<=10;i++)
{  
while(t!=0)
{
r=n%10;
d=r*r*r;
sum=sum+d;
t=n/10;
}
if(sum==n)
{
printf("it is a armstrong num");
}
else 
{
printf("it is not a armstrong num");
}
}
}
