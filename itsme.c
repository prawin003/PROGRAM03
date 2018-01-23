#include<stdio.h>
#include<string.h>
void main()
{
   string s1[i],s2[i];
   int i,temp;
   printf("enter a string-1");
   scanf("%s",&s1[i]);
   printf("enter a string-2");
   scanf("%s",&s2[i]);
   for(i=0;(s1[i]!="/0"&&s2[i]!="/0");i++)
   {
       if(s1[i]!=s2[i])
       {
        temp=1;
        break;
        }
        else 
        {
           temp=0;
           }
    if(temp==0)
    {
      printf("the value is equal");
    }
    else
    {
    printf("the value is not equal");
    }
    }
    }
    
