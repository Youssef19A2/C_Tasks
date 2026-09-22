/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Write a program in C to check Even/Odd Variants.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
signed int EvenOddFun(signed int Num);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

/* ************************** Definition Section Start ************************ */
signed int Number = 0;
/* ************************** Definition Section End   ************************ */

int main()
{
    printf("\n---------------------------------------------------------------------------\n");
    printf("Please Enter The Number : ");
    scanf("%u", &Number);
    printf("\n---------------------------------------------------------------------------\n");

    if (EvenOddFun(Number)){
        printf("Even Number !");
    }else {
        printf(" Odd Number!");
    }
    printf("\n---------------------------------------------------------------------------\n");
    return 0;
}
signed int EvenOddFun(signed int Num)
{
    
    return((Num % 2) == 0);
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/