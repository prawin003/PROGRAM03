#include<stdio.h.
main()
{
int a[10],i,max;
printf("enter 10 values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}

