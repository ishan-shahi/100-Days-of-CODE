#include <stdio.h>

int main(){

    float num1,num2;
    float sum,diff,prod,quot;

    printf("Enter two integers: ");
    scanf("%f %f",&num1,&num2);

    sum= num1 + num2;
    diff= num1 - num2;
    prod= num1 * num2;
    quot= num1 / num2;

    printf("Sum = %f\n",sum);
    printf("Difference = %f\n",diff);
    printf("Product = %f\n",prod);
    printf("Quotient = %f\n",quot);

    return 0;
}