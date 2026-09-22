/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Series Sum Using Function Variants.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
void GetSumming(unsigned int Numebr);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main()
{
    unsigned NumberOne = 0;
    printf("---------------------------------------------------------------------------\n");
    printf("Please Enter The Numebr : ");
    scanf("%u", &NumberOne);
    printf("---------------------------------------------------------------------------\n");
    GetSumming(NumberOne);
    printf("---------------------------------------------------------------------------\n");
    return 0;
}

void GetSumming(unsigned int Numebr)
{
    unsigned int counter = 0;
    unsigned int result = 0;
    for (counter = 0; counter <= Numebr; counter++)
    {
        result += counter;
    }
    printf("Summing = % i \n", result);
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/