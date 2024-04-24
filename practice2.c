#include<stdio.h>
int main()
{
   int item = 33;
   float per_item_price = 13.4;
   float total_item_price = item * per_item_price;

  printf("item value: %d \n",item);
  printf("per item price:  %.2f \n",per_item_price);
  printf("total item price: %.2f \n",total_item_price);

  
  return 0;
}
