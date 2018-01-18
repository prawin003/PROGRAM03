#include<stdio.h>
int main()
{
char ch;
printf("enter an alphabet:\n");
scanf("%c",&ch);
if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
{
printf("\n %c is a VOWEL.",ch);
}
else
{
printf("\n %c is a CONSONANT.",ch);
}
return 0;
}
