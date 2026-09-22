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
unsigned counter = 0;
unsigned factrial = 1, fact_num = 0;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("Please Enter the number : ");
    scanf("%i", &fact_num);
    if (fact_num < 0)
    {
        printf("Invalid number \n");
    }
    else
    {
        for (counter = 1; counter <= fact_num; ++counter)
        {
            factrial *= counter;
        }
    }
    printf("Factrial of Number [%i] is : %i ", fact_num, factrial);

    return 0;
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/