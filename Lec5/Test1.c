/*=============================================================================
/ @author :Yousifahmed
/ @date : 21-9-2026
/ @version : 1.0.0
/ @brief : Test 1 example for Lec5
/==============================================================================
*/

#include <stdio.h>

/*For loop use when you know  the number of repeat this code
while use when you didnt know the number of repeat of the code
do while --> it will do the statement in the do and then entre while loop
break used with looping and switch case only but with loopkng use with if condition (make a rule when you learn c)
*/
unsigned int Num_count=0;
unsigned int counter = 0 , Summing =0;

int main()
{
    printf("Please Enter The Number Counter : ");
    scanf("%i", &Num_count);
    for (counter = 0; counter <= Num_count; counter++)
    {
        Summing += counter ;

    }
    print("Summing = %i ", Summing);
    return 0;
}