//program to display name, reg. no.,branch and hobbies.
#include<stdio.h>
#include<conio.h>
int main()
{
    char n[100],b[100],h[100];
    int r;
    printf("\nEnter your name:\n");
    scanf("%s",&n);

    printf("\nEnter your branch:\n");
    scanf("%s",&b);
    gets(b);

    printf("\nEnter your hobbies:\n");
    gets(h);

    printf("\nEnter your registration number:\n");
    scanf("%d",&r);
    return 0;
}








