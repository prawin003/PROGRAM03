
#include <stdio.h>

int main()
{
    int a,b,c,n,i;
    scanf("%d%d%d",&a,&b,&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
