#include<stdio.h>
#include<conio.h>
void main()
{
int i,rem,rev=0,t;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("%d is a palindrome",rev);
else
printf("%d is not a palindrome",rev);
}

}
