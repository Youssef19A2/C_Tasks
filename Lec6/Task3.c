/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Write a program in C to  swap the value between two number.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
void Swap_Fun(unsigned int Number1, unsigned int Number2);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

/* ************************** Definition Section Start ************************ */
unsigned int NumberOne, NumberTwo;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("\n---------------------------------------------------------------------------\n");
    printf("please Enter NumberOne : ");
    scanf("%i", &NumberOne);
    printf("\n---------------------------------------------------------------------------\n");
    printf("please Enter NumberTwo : ");
    scanf("%i", &NumberTwo);
    printf("\n---------------------------------------------------------------------------\n");
    Swap_Fun(NumberOne, NumberTwo);

    return 0;
}

void Swap_Fun(unsigned int Number1, unsigned int Number2)
{
    unsigned int Num1 = 0;
    unsigned int Num2 = 0;
    Num1 = Number2;
    Num2 = Number1;
    printf("\n---------------------------------------------------------------------------");
    printf("\nThe Numbers After Swap NumberOne= %i and NumberTwo =  %i", Num1, Num2);
    printf("\n---------------------------------------------------------------------------");
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/