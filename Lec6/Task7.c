
/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Prime Check Function Variants.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
void IsPrime(signed int Number);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main()
{
    unsigned int NumberOne = 0;
    printf("---------------------------------------------------------------------------\n");
    printf("Enter a Positive number: ");
    scanf("%d", &NumberOne);
    printf("---------------------------------------------------------------------------\n");
    IsPrime(NumberOne);
    return 0;
}
void IsPrime(signed int Number)
{
    if (Number == 0 & Number == 1)
    {
        printf("This Number %i Is Not A Prime Number :)\n", Number);
        printf("---------------------------------------------------------------------------\n");
    }
    else if (Number > 0)
    {
        printf("This Number %i Is  A Prime Number :)\n", Number);
        printf("---------------------------------------------------------------------------\n");
    }
    else
    {
        printf("This Number %i Is Not A Prime Number :)\n", Number);
        printf("---------------------------------------------------------------------------\n");
    }
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/