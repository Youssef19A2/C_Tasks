/*=============================================================================
/ @author :Yousifahmed  
/ @date : 20-9-2026
/ @version : 1.0.0
/ @brief : Test 2 example for C17 language standard version 
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
signed int y=20;
unsigned int x=10;
int z=30;
signed char a=10;
unsigned char b=20;
char c=30;
long int d=40;
short int e=50;
float f=60.0; // 6 decimel
double g=70.0;// 15 decimel
long double h=80.0;// 19 decimel
extern  unsigned int i; // doesn't take a place in memory until it is defined in another file
unsigned int i; // that variable take place int he memory and becouse it global variable his intial value is zero  
const float pi = 3.14; //const variable cant change his value becouse it a global variable
int *ptr;
/* ************************** Global Variable Declaration Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */

/* ************************** Sub-Program  Declaration Section End   ***************************** */
  
int main() 
{
    const int var1 =10; //local const variable can change his value with indiruct method using pointer
    printf("var1 = %i \n",var1);
    ptr= &var1;
    *ptr = 20;
    printf("var1 =%i \n", var1);
    printf("Hello World\n");
    printf("Hello,World\n\a");
    printf("Hello,\tWorld\n");
    printf("\"Hello\",\"World\"\n");
    printf("Hello,\\World\n");
    printf("size of y =%i",sizeof(y));
    printf("\nsize of x =%i",sizeof(x));
    printf("\nsize of z =%i",sizeof(z));
    printf("\nsize of a =%i",sizeof(a));
    printf("\nsize of b =%i",sizeof(b));
    printf("\nsize of c =%i",sizeof(c));
    printf("\nsize of d =%i",sizeof(d));
    printf("\nsize of e =%i",sizeof(e));
    printf("\nsize of f =%i",sizeof(f));
    printf("\nsize of g =%i",sizeof(g));
    printf("\nsize of h =%i",sizeof(h));
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("CHAR_MAX = %d\n", CHAR_MAX);
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);   
    printf("LONG_LONG_MAX = %lld\n", LLONG_MAX);
    printf("LONG_LONG_MIN = %lld\n", LLONG_MIN);


    return 0;
}

/* ************************** Sub-Program  Defination Section Start ***************************** */

/* ************************** Sub-Program  Defination Section End   ***************************** */



/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/