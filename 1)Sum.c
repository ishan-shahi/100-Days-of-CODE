#include <stdio.h>

int main(){

    float num1,num2,sum;
    printf("Enter two integers: ");
    scanf("%f %f",&num1,&num2);
    sum= num1 + num2;
    
    printf("The sum of %f and %f is =%f\n",num1,num2,sum);
    
    return 0;
}