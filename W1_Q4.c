#include<stdio.h>

void main()
{
char ch;
int x,y;
printf("choose the operator(+,-,*,/,%%):");
scanf("%c",&ch);
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
switch(ch)
{
    case'+':
    printf("%d+%d=\t%d\n",x,y,x+y);
    break;

    case'-':
    printf("%d-%d=\t%d\n",x,y,x-y);
    break;

    case'*':
    printf("%d*%d=\t%d\n",x,y,x*y);
    break;

    case'/':
    printf("%d/%d=\t%d\n",x,y,x/y);
    break;

    case'%':
    printf("%d%%d=\t%d\n",x,y,x%y);
    break;
    default:
    printf("INVALID INPUT!");
}

}


