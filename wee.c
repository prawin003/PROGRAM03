#include<stdio.h> 
int main()
{
   int m,n,rem,i;
 printf("First Range:\n");
 scanf("%d",&m);
 printf("Final Range:\n");
 scanf("%d",&n);
 printf("\n The Even numbers between the given interval  %d and%d are",m,n); 
 for(i=m;i<=n;++i)
{
 rem=i%2;
 if(rem==0)
 printf("\n %d",i);
 return 0; 
}}
