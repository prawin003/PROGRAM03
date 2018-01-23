#include<stdio.h>
void main()
    {
    char A[30];
    int i,flag=0,n=0;
    clrscr();
    printf("enter the string:");
    scanf("%s",A);
    for(i=0;A[i]!='\0';i++)
    {
    if(A[i]=='0'||A[i]=='1'||A[i]=='2'||A[i]=='3'||A[i]=='5'||A[i]=='6'||A[i]=='7'||A[i]=='8'||A[i]=='9')
    {
    flag=flag+1;
    }
    }
    if(flag==0)
    printf("string not contains numbers");
    else
    printf("string contains numbers");
    getch();
}
