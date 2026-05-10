#include<stdio.h>
void main()
{
int a,b;
char choice;
printf("enter any two number");
scanf("%d %d",&a,&b);
scanf("%c",&choice);
switch(choice)
{
case 'A':
printf("%d", a+b);
break;
case 'S':
printf("%d",a-b);
break;
case'M':
printf("%d",a*b);
break;
case 'D':
printf("%d",a/b);
break;
default:
printf("wrong choice");
}
}