/*===================================================================================
/ @author :Yousifahmed
/ @date : 22-9-2026
/ @version : 1.0.0
/ @brief : parcitse in function
/====================================================================================
*/

/* We have two type in funtion :
 1) libirary function like scanf or printf
 2) user define function
There is Four type of user define function
1) no return (void) and no parameter or argument (void)
2) no return (void) and have parameter or argument (data type arg1 , data type arg2 , ...)
3) Data type and have no parameter (void)
4) Data type and have parameter or argument (data type arg1 , data type arg2 , ...)
*/
/* ************************** Includes Section Start ************************** */
#include <stdio.h>
/* ************************** Includes Section End   ************************** */

/* ************************** Sub-Program  Declaration Section Start ***************************** */
void Print_Messagge(void); // function decleration or prototype
void GetSumming(unsigned int Num1 , unsigned int Num2);
unsigned int GetMultiply(unsigned int num1 , unsigned int num2);
unsigned int GetDivision(void);
/* ************************** Sub-Program  Declaration Section End   ***************************** */

int main()
{
    unsigned int Result =0;
    Print_Messagge(); // Function call 
    GetSumming(2,3);
    Result=GetMultiply(3,4);
    printf("Get Multiply = %i \n", Result );
    GetDivision();
}
void Print_Messagge(void){
    printf("Hello ,Wolrd !\n");// function decleration 
} 
void GetSumming(unsigned int Num1 , unsigned int Num2){
 printf("summing = %i \n", (Num1 + Num2));

}
unsigned int GetMultiply(unsigned int num1 , unsigned int num2){

    return (num1*num2);
}
unsigned int GetDivision(void){
    unsigned int Number1 =0 , Number2 =0;
    unsigned int Result_5 =0;
    printf("Please Enter The two Number : ");
    scanf("%u %u", &Number1, &Number2);
    Result_5=Number1/Number2;
    printf("Result 5 = %i \n",Result_5);
    return Result_5;
}
/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/