#include<stdio.h>
int main()
    {
int n1,n2,n3;
printf("Enter the values");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>=n2&&n1>=n3)
printf("n1 is greatest",&n1);
else if(n2>=n1&&n2>=n3)
printf("n2 is greatest",&n2);
else
printf("n3 is greatest",&n3);
return 0;
}
