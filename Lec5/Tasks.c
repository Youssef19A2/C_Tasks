/*===================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Tasks 
/====================================================================================
*/
/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <math.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
unsigned int Rows_number = 0;
unsigned int counter_1 = 0;
unsigned int counter_2 = 0;
unsigned int counter_3 = 0;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("Please Enter Number of row : ");
    scanf("%u", &Rows_number);
    for (counter_1 = 1; counter_1 <= Rows_number; counter_1++)
    {
        for (counter_2 = 1; counter_2 <= Rows_number - counter_1; counter_2++)
        {
            printf(" ");
        }
        for (counter_3 = 1; counter_3 < (2 * counter_1) ; counter_3++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/