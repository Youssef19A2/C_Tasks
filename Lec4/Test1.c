/*=============================================================================
/ @author :Yousifahmed
/ @date : 21-9-2026
/ @version : 1.0.0
/ @brief : Test 1 example for Lec4
/==============================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */

/* ************************** Definition Section End   ************************ */

/* ************************** Global Variable Declaration Section Start ************************** */
unsigned int NumberOne = 20;
unsigned int NumberTwo = 10;
unsigned int NumberThree = 0;
float temp = 0.0;
float Motor_Speed = 0.0;
/* ************************** Global Variable Declaration Section End   ************************** */

int main()
{
    printf("Please enter the Thired Number: ");
    scanf("%i", &NumberThree);
    if ((NumberThree > NumberOne) && (NumberThree > NumberTwo))
    {
        printf("This is a Good Number\n");
    }
    else
    {
        printf("Try Again !!");
    }

    printf("Please Enter Temp Value : ");
    scanf("%f", &temp);
    if (25 < temp)
    {
        printf("fan will be on\n");
    }
    else
    {
        printf("fan will be off\n");
    }

    printf("please enter motor speed : ");
    scanf("%f", &Motor_Speed);
    if (20 < Motor_Speed)
    {
        printf("The speed will increase\n");
    }
    else
    {
        printf("the speed will decrease\n");
    }
    return 0;
}


/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/