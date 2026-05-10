#include <stdio.h>
int main() 
{
  int amount, notes;
int choice = 100; 
printf("Enter the total amount in Rupees: ");
scanf("%d", &amount);
printf("\nCurrency Breakdown for Rs. %d:\n", amount);
switch (choice) 
{
        case 100:
            notes = amount / 100;
            if (notes > 0) printf("100 Rupee notes: %d\n", notes);
            amount %= 100;
        case 50:
            notes = amount / 50;
            if (notes > 0) printf("50 Rupee notes: %d\n", notes);
            amount %= 50;
case 20:
            notes = amount / 20;
            if (notes > 0) printf("20 Rupee notes: %d\n", notes);
            amount %= 20;
case 10:
            notes = amount / 10;
            if (notes > 0) printf("10 Rupee notes: %d\n", notes);
            amount %= 10;
 case 5:
            notes = amount / 5;
            if (notes > 0) printf("5 Rupee notes: %d\n", notes);
            amount %= 5;
case 2:
            notes = amount / 2;
            if (notes > 0) printf("2 Rupee notes: %d\n", notes);
            amount %= 2;
case 1:
            notes = amount / 1;
            if (notes > 0) printf("1 Rupee notes: %d\n", notes);
            break;
default:
            printf("Invalid amount.\n");
  }
return 0;
}