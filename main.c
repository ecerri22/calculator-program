#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition()
{
    double a, b;
    printf("Enter the two numbers you want to add: ");
    scanf("%lf%lf", &a, &b);
    printf("%lf", a+b);
}

double subtraction()
{
    double a, b;
    printf("Enter the two numbers you want to substract: ");
    scanf("%lf%lf", &a, &b);
    printf("%lf", a-b);
}

double multiplication()
{
    double a, b;
    printf("Enter the two numbers you want to multiply: ");
    scanf("%lf%lf", &a, &b);
    printf("%lf", a*b);
}

void division()
{
    double a, b;
    printf("Enter the two numbers you want to divide: ");
    scanf("%lf%lf", &a, &b);
    printf("%lf", a/b);
}

void power()
{
    double a, m, p;

    printf("Enter the number and the power: ");
    scanf("%lf%lf", &a, &m);

    p=pow(a,m);

    printf("%lf", p);
}

void squareRoot()
{
    double a;

    printf("Enter the number to find the square root: ");
    scanf("%lf", &a);

    if(a>0){
        a=sqrt(a);
         printf("%lf", a);

    }
    else {
        printf("Error: Input is negative number");
    }

}

int main()
{
    int X=1;
    char sign;
    double a, b, m;

    printf("Enter the calculator operation you want to do:");

    scanf("%c", &sign);

    switch(sign)
    {
        case '+':
        addition(a, b);
        break;

        case '-':
        subtraction(a, b);
        break;

        case '*':
        multiplication(a, b);
        break;

        case '/':
        division(a, b);
        break;

        case '^':
        power(a, m);
        break;

        case 's':
        squareRoot(a);
        break;

        default : system("cls");


    }

}
