#include <stdio.h>
int main()
{
    double num1,num2,add,sub,mul,div;
    printf("Enter two numbers\n");
    scanf("%lf%lf",&num1,&num2);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    
    printf("Addition = %lf\nSubstraction = %lf\nMultiplication = %lf\nDivision = %lf\n",add,sub,mul,div);
    return 0;
}