/*============================================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : Solve task at w3resource (Write a program in C to find the square of any number using the function.)
/==============================================================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <math.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
double SquareNumFun();
/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main(){

    SquareNumFun();

    return 0;
}
double SquareNumFun(){
    double Number;
    printf("\n---------------------------------------------------------------------------");
    printf("\nPlese Enter The Number you wat to Have its Square : ");
    scanf("%lf",& Number);
    printf("\n---------------------------------------------------------------------------");
    printf("\nThe Number after Function :  ");
    printf("%.2lf", pow(Number,2));
    printf("\n--------------------------------------------------------------------------");

    return pow(Number,2);
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/