#include "calculator.h"
#include <stdio.h>
unsigned int GetSumming(int NumberOne, int NumberTwo)
{
    unsigned int ErrorState = 0;
    if ((NumberOne < 0) || (NumberTwo < 0))
    {
        printf("Error: Negative numbers not allowed\n");
        ErrorState = 1;
    }
    else
    {
        printf("%i\n", (NumberOne + NumberTwo));
    }
    return ErrorState;
}
unsigned int GetSubStract(int NumberOne, int NumberTwo)
{
    unsigned int ErrorState = 0;
    if ((NumberOne < 0) || (NumberTwo < 0))
    {
        printf("Error: Negative numbers not allowed\n");
        ErrorState = 1;
    }
    else
    {
        printf("%i\n", (NumberOne - NumberTwo));
    }
    return ErrorState;
}
unsigned int GetMultiply(int NumberOne, int NumberTwo)
{
    unsigned int ErrorState = 0;
    if ((NumberOne < 0) || (NumberTwo < 0))
    {
        printf("Error: Negative numbers not allowed\n");
        ErrorState = 1;
    }
    else
    {
        printf("%i\n", (NumberOne * NumberTwo));
    }
    return ErrorState;
}
unsigned int GetModulus(int NumberOne, int NumberTwo)
{
    unsigned int ErrorState = 0;
    if ((NumberOne < 0) || (NumberTwo < 0))
    {
        printf("Error: Negative numbers not allowed\n");
        ErrorState = 1;
    }
    else if ((NumberTwo == 0))
    {
        printf("Error: Cannot Modulus by zero\n");
        ErrorState = 1;
    }
    else
    {
        printf("%i\n", (NumberOne % NumberTwo));
    }
    return ErrorState;
}
unsigned int GetDivision(int NumberOne, int NumberTwo)
{
    unsigned int ErrorState = 0;
    if ((NumberOne < 0) || (NumberTwo < 0))
    {
        printf("Error: Negative numbers not allowed\n");
        ErrorState = 1;
    }
    else if ((NumberTwo == 0))
    {
        printf("Error: Cannot divide by zero\n");
        ErrorState = 1;
    }
    else
    {
        printf("%i\n", (NumberOne / NumberTwo));
    }
    return ErrorState;
}
