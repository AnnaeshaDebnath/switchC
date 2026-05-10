#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int main()
{
int a, b, c, flag=0;
float root1, root2, r1, r2, disc;
printf("Enter the values of a,b,c of the generic quadratic equation: ");
 scanf("%d %d %d", &a, &b, &c);
 disc = (b * b) - (4 * a * c);
if (disc < 0)
flag = 0;
 else if (disc == 0)
  flag = 1;
 else if (disc > 1)
 flag = 2;
 r1 = (- b / (2 * a));
 r2 = ((sqrt(-disc)) / (2 * a));
 root1 = ((-b + sqrt(disc)) / (2 * a));
 root2 = ((-b - sqrt(disc)) / (2 * a));
 switch (flag)
 {
case 0:
 printf("The roots are imaginary\n");
 break;
 case 1:
 printf("The roots are real and equal\n");
 break;
case 2: printf("The roots are real and unequal\n");
 break;
}
if (flag==2)
printf("The roots are %.2f and %.2f", root1, root2);
 else if (flag==1)
  printf("The roots are %.2f and %.2f", root1, root2);
else if (flag==0)
printf("The roots are %.2f + i %.2f and %.2f - i %.2f", r1, r2, r1, r2);
}

