#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s[10];
printf("string");
gets(s);
int i,n,count=0;
n=strlen(s);

for(i=0;i<=n;i++)
{
if(isspace(s[i]))
{
count++;
}
}
printf("%d",count);
return 0;
}
