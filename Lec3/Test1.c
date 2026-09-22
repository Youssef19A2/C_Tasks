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

 /*Error Types
 /1 --> syntax Error
 /2 --> Run-time Error
 /3 --> Logical Error
 /4 --> Semantic Error
 /5 --> Linker Error
 */
/*    Literals

octal 0    EX : 066
decimal nothing EX : 99
hexadecimal 0x  EX : 0xFF 
U --> unsigned  EX : int h = 99u or int h = 99U
L --> Long  Ex : int h = 99L or int h =99l
Examples
0777 (Illegal)     85 (Decimal)     0x4b (Hexadecimal)
221 (Legal)        0213(Octal)      30u (unsigned int)
0xFeeL (legal)     30l (long int)   30ul (unsigned long int) 
Not Recommended to write this 20LL (illegal) or 20UU (illegal)
E or e --> exponential notation  EX : 1.2e3 = 1.2 * 10^3 = 1200

*/
/* ************************** Definition Section Start ************************ */
unsigned int NumberOne =10 ,NumberTwo =20;
unsigned int Result=0;
/* ************************** Definition Section End   ************************ */

/* ************************** Global Variable Declaration Section Start ************************** */

/* ************************** Global Variable Declaration Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */

/* ************************** Sub-Program  Declaration Section End   ***************************** */
  
int main() 
{
    printf("NumberOne + NumberTwo =%i \n",(NumberOne+NumberTwo));
    printf("NumberOne - NumberTwo =%i \n",(NumberOne-NumberTwo));
    printf("NumberOne * NumberTwo =%i \n",(NumberOne*NumberTwo));
    printf("NumberOne / NumberTwo =%i \n",(NumberOne/NumberTwo));
    printf("NumberOne %% NumberTwo =%i \n",(NumberOne%NumberTwo));
    printf("NumberOne++ =%i \n",NumberOne);
    NumberOne++; // post increment
    printf("Number = %i \n",NumberOne);
    ++NumberOne; // pre increment
    printf("Number = %i \n",NumberOne);
    NumberOne--; // post decrement
    printf("NumberOne-- =%i \n",NumberOne);
    --NumberOne; // pre decrement
    printf("Number = %i \n",NumberOne);
    return 0;
}

/* ************************** Sub-Program  Defination Section Start ***************************** */

/* ************************** Sub-Program  Defination Section End   ***************************** */




/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/