/*=============================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Task 1 example for Lec5 (Simple calculator)
/==============================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
unsigned int NumberOne = 0;
unsigned int NumberTwo = 0;
unsigned int Result = 0;
char user_operator;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("Please Enter The operator ( + , - , * , / ) : ");
    scanf("%c", &user_operator);
    printf("Please Enter The First Number : ");
    scanf("%u", &NumberOne);
    printf("please Enter The Second Number : ");
    scanf("%u", &NumberTwo);

    switch (user_operator)
    {
    case '+':
        Result = NumberOne + NumberTwo;
        printf("%i", Result);
        break;
    case '-':
        Result = NumberOne - NumberTwo;
        printf("%i", Result);
        break;
    case '*':
        Result = NumberOne * NumberTwo;
        printf("%i", Result);
        break;
    case '/':
        Result = NumberOne / NumberTwo;
        printf("%i", Result);
        break;
    default:
        printf("Invalid operator !!");
        break;
    }
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/