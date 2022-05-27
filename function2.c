#include <stdio.h>
void swapValues( int *v1, int *v2 )  
{
   int tmpV=0;
   tmpV = *v1;
   *v1 = *v2;
   *v2 = tmpV;
 
}
int main( )
{
    int num1 = 5, num2 = 9;
    printf("Before swapping: %d, %d", num1, num2);
    swapValues(&num1, &num2);
    printf("\nAfter swapping: %d, %d", num1, num2);
}
