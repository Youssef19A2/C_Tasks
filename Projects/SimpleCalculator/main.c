#include <stdio.h>
#include "calculator.h"

int main()
{
    char operator = 0;
    int NumberOne = 0;
    int NumberTwo = 0;
    printf("====================================================================\n");
    printf("Please Enter The operator ( + , - , * , % , / ) : ");
    scanf("%c", &operator);
    printf("====================================================================\n");
    printf("Please Enter The First Number : ");
    scanf("%d", &NumberOne);
    printf("====================================================================\n");
    printf("Please Enter The Second Number : ");
    scanf("%d", &NumberTwo);
    printf("====================================================================\n");
    switch (operator)
    {
    case '+':
        if (GetSumming(NumberOne, NumberTwo) != 0)
        {
            printf("An Error\n");
        }
        break;
    case '-':
        if (GetSubStract(NumberOne, NumberTwo) != 0)
        {
            printf("An Error\n");
        }
        break;
    case '*':
        if (GetMultiply(NumberOne, NumberTwo) != 0)
        {
            printf("An Error\n");
        }
        break;
    case '/':
        if (GetDivision(NumberOne, NumberTwo) != 0)
        {
            printf("An Error\n");
        }
        break;
    case '%':
        if (GetModulus(NumberOne, NumberTwo) != 0)
        {
            printf("An Error\n");
        }
        break;
    default:
        printf("Please Enter a valid operator \n");
        break;
    }

    return 0;
}