/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Decimal to Binary Conversion Function Variants.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
void decimalToBinary(unsigned int Number);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main()
{
    unsigned int NumberOne = 0;
    printf("---------------------------------------------------------------------------\n");
    printf("Enter a decimal number: ");
    scanf("%d", &NumberOne);
    printf("---------------------------------------------------------------------------\n");
    printf("Binary: ");
    decimalToBinary(NumberOne);
    printf("\n---------------------------------------------------------------------------\n");

    return 0;
}
void decimalToBinary(unsigned int Number)
{
    unsigned int startValue = 0;
    signed int counter;
    for (counter = 31; counter >= 0; counter--)
    {
        int bit = (Number >> counter) & 1;
        if (bit)
        {
            startValue = 1;
        }
        if (startValue)
        {
            printf("%d", bit);
        }
    }

    if (!startValue)
    {
        printf("0");
    }
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/