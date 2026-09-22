/*===================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Task 3 example for Lec5 (Program to calculate the factorial of a number )
/====================================================================================
*/
/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
unsigned int even_number = 0;
unsigned int result = 0;
unsigned int counter = 0;
// 1 3 5 7 9 11 13 15 17 19
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("Please Enter The Number : ");
    scanf("%i", &even_number);
    if (even_number < 0)
    {
        printf("enter a valid number please. \n");
    }
    else
    {
        printf("The odd Number are   :  ");
        for (counter = 1; counter <= even_number; ++counter)
        {
            printf("%i ", 2 * counter - 1);
            result += 2 * counter - 1;
        }
    }
    printf("\n");
    printf("result of [%i] is : %i ", even_number, result);
    return 0;
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/