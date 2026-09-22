/*========================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Task 2 example for Lec5 (Program to calculate the sum of first natural number )
/==========================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
signed int Num_count=0;
unsigned int counter = 0 , Summing =0;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("Please Enter The Number Counter : ");
    scanf("%i", &Num_count);
    for (counter = 0; counter <= Num_count; counter++)
    {
        Summing += counter ;

    }
    printf("Summing = %i ", Summing);
    return 0;
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/