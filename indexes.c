#include<stdio.h>
void main()
{
int i,a[50],s;
printf("enter no of elements in an array\s");
scanf("%d",&s);
printf("enter the elements in an array:\s");
for(i=0;i<s;i++)
{
scanf("%d\s",&a[i]);
}
for(i=0;i<s;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}
