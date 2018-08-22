#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int num1, num2, sum, sub, div, mul;
    char *input1 = malloc(50);
    char *input2 = malloc(50);
    printf("Enter first number");
    gets(input1);
    
    printf("Enter second number");
    gets(input2);
   
    num1 = atoi((const char*)input1);
    num2 = atoi((const char*)input2);

    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    sub=num1-num2;
    printf("%d - %d = %d\n", num1, num2, sub);
    mul=num1*num2;
    printf("%d * %d = %d\n", num1, num2, mul);
    div=num1/num2;
    printf("%d / %d = %d\n", num1, num2, div);
}