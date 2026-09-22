/*=============================================================================
/ @author :Yousifahmed
/ @date : 21-9-2026
/ @version : 1.0.0
/ @brief : Open BTN in register
/==============================================================================
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
unsigned int Btn_1 = 0x01; /* 0000 0001 */
unsigned int Btn_2 = 0x02; /* 0000 0010 */
unsigned int Btn_3 = 0x04; /* 0000 0100 */
unsigned int Btn_4 = 0x08; /* 0000 1000 */
unsigned int Btn_5 = 0x10; /* 0001 0000 */
unsigned int Btn_6 = 0x20; /* 0010 0000 */
unsigned int Btn_7 = 0x40; /* 0100 0000 */
/* ************************** Definition Section End   ************************ */

/* ************************** Global Variable Declaration Section Start ************************** */

/* ************************** Global Variable Declaration Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */

/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main()
{
    printf("Please Enter the value of Btn_1 :");
    scanf("%x", &Btn_1); /*0000 0001*/
    printf("Btn_1 = 0x%x \n", Btn_1);
    if (Btn_1 == 0x01)
    {
        printf("Btn_1 is High \n");
        Btn_1 = Btn_1 | 0x01; /* Set Btn_1 bit to 1 */
    }
    else
    {
        printf("Btn_1 is Low \n");
        Btn_1 = Btn_1 & 0x0E; /* Clear Btn_1 bit to 0 */
    }
    printf("Please Enter the value of Btn_2 :");
    scanf("%x", &Btn_2); /*0000 0010*/
    printf("Btn_2 = 0x%x \n", Btn_2);
    if (Btn_2 == 0x02)
    {
        printf("Btn_2 is High \n");
        Btn_2 = Btn_2 | 0x02; /* Set Btn_2 bit to 1 */
    }
    else
    {
        printf("Btn_2 is Low \n");
        Btn_2 = Btn_2 & 0x0D; /* Clear Btn_2 bit to 0 */
    }
    printf("Please Enter the value of Btn_3 :");
    scanf("%x", &Btn_3); /*0000 0100*/
    printf("Btn_3 = 0x%x \n", Btn_3);
    if (Btn_3 == 0x04)
    {
        printf("Btn_3 is High \n");
        Btn_3 = Btn_3 | 0x04; /* Set Btn_3 bit to 1 */
    }
    else
    {
        printf("Btn_3 is Low \n");
        Btn_3 = Btn_3 & 0x0B; /* Clear Btn_3 bit to 0 */
    }
    printf("Please Enter the value of Btn_4 :");
    scanf("%x", &Btn_4); /*0000 1000*/
    printf("Btn_4 = 0x%x \n", Btn_4);
    if (Btn_4 == 0x08)
    {
        printf("Btn_4 is High \n");
        Btn_4 = Btn_4 | 0x08; /* Set Btn_4 bit to 1 */
    }
    else
    {
        printf("Btn_4 is Low \n");
        Btn_4 = Btn_4 & 0x07; /* Clear Btn_4 bit to 0 */
    }
    printf("Please Enter the value of Btn_5 :");
    scanf("%x", &Btn_5); /*0001 0000*/
    printf("Btn_5 = 0x%x \n", Btn_5);
    if (Btn_5 == 0x10)
    {
        printf("Btn_5 is High \n");
        Btn_5 = Btn_5 | 0x10; /* Set Btn_5 bit to 1 */
    }
    else
    {
        printf("Btn_5 is Low \n");
        Btn_5 = Btn_5 & 0x0F; /* Clear Btn_5 bit to 0 */
    }
    printf("Please Enter the value of Btn_6 :");
    scanf("%x", &Btn_6); /*0010 0000*/
    printf("Btn_6 = 0x%x \n", Btn_6);
    if (Btn_6 == 0x20)
    {
        printf("Btn_6 is High \n");
        Btn_6 = Btn_6 | 0x20; /* Set Btn_6 bit to 1 */
    }
    else
    {
        printf("Btn_6 is Low \n");
        Btn_6 = Btn_6 & 0x1F; /* Clear Btn_6 bit to 0 */
    }
    printf("Please Enter the value of Btn_7 :");
    scanf("%x", &Btn_7); /*0100 0000*/
    printf("Btn_7 = 0x%x \n", Btn_7);
    if (Btn_7 == 0x40)
    {
        printf("Btn_7 is High \n");
        Btn_7 = Btn_7 | 0x40; /* Set Btn_7 bit to 1 */
    }
    else
    {
        printf("Btn_7 is Low \n");
        Btn_7 = Btn_7 & 0x3F; /* Clear Btn_7 bit to 0 */
    }

    return 0;
}

/* ************************** Sub-Program  Defination Section Start ***************************** */

/* ************************** Sub-Program  Defination Section End   ***************************** */

/*=====================================================================================================
/ User                                Date                       Breif
/======================================================================================================
/ Yousif ahmed                      21Sep2026                    First program to open BTN in register
*/