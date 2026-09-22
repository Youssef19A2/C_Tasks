/*=============================================================================
/ @author :Yousifahmed  
/ @date : 21-9-2026
/ @version : 1.0.0
/ @brief : Test 3 example for C17 language standard version 
/============================================================================== 
*/

/* ************************** Includes Section Start ************************** */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Definition Section Start ************************ */
unsigned int a = 0xFF; /* 1111 1111 */ 
unsigned int b= 0x0F;  /* 0000 1111 */

/* ************************** Definition Section End   ************************ */

/* ************************** Global Variable Declaration Section Start ************************** */

/* ************************** Global Variable Declaration Section End   ************************** */


int main() 
{
   printf("a = %i \n",(a & b)); /* 0000 1111 = 15 */
   printf("a = %i \n",(a | b)); /* 1111 1111 = 255 */
   printf("a = %i \n",(a ^ b)); /* 1111 0000 = 240 */
   printf("a = %i \n",(~a));    /* 0000 0000 = 0 */
    return 0;
}




/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/