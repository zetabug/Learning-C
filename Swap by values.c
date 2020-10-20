#include <stdio.h>
int main()
{
    double num1,num2,temp ;
    printf("Enter num1\n");
    scanf("%lf",&num1);

    printf("Enter num2\n");
    scanf("%lf",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping the numbers\n");

    printf("\nnum1 = %lf\nnum2 = %lf\n",num1,num2);

    return 0;

}