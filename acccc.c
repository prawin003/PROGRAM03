#include <stdio.h>
void main()
{
long int r,i,j,temp;
printf("enter the number");
scanf("%ld",&r);
long int a[r];
for(i=0;i<r;i++)
{
scanf("%ld ",&a[i]);
}
for(i=0;i<r;i++)
{
for(j=i+1;j<r;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<r;i++)
printf("%ld ",a[i]);
}
