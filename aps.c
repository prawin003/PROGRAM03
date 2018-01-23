#include<stdio.h>
void main()
{
int a,b,c,d,i,j;
printf("ENTER THE 1ST HOUR AND MIN");
scanf("%d%d",&a,&b);
printf("ENTER THE 2ND HOUR AND MIN");
scanf("%d%d",&c,&d);
i=a-c;
j=b-d;
printf("THE DIFFERENCE BETWEEN TIME %d\t%d",i,j);
return 0;
}
