#include <iostream>

void swap(int *x, int *y);
int main ()
{
   
   int a = 1;
   int b = 2;
   cout<<"Before swap, value of a : n", a );
   cout<<"Before swap, value of b : n", b );
   /* calling a function to swap the values.
    * &a indicates pointer to a ie. address of variable a and
    * &b indicates pointer to b ie. address of variable b.
   */
   swap(&a, &b);
      cout<<"After swap, value of a : n", a );
   cout<<"After swap, value of b : n", b );
   return 0;
}
void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}