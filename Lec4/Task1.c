/*=============================================================================
/ @author :Yousifahmed
/ @date : 21-9-2026
/ @version : 1.0.0
/ @brief : Task 1 example for Lec4 (Find the largest Number between three number)
/==============================================================================
*/

#include <stdio.h>

unsigned int NumberOne, NumberTwo, NumberThree;

int main()
{
    printf("Please entre the first number : ");
    scanf("%u", &NumberOne);
    printf("Please Enter The second Number : ");
    scanf("%u", &NumberTwo);
    printf("Please Enter The Third Number : ");
    scanf("%u", &NumberThree);
    if ((NumberOne > NumberTwo) && (NumberOne > NumberThree))
    {
        printf("Number One is the largest number \n");
    }
    else if (NumberTwo > NumberThree)
    {
        printf("Number Two is the largest Number \n");
    }
    else
    {
        printf("Number Three is the largest number \n`");
    }
    return 0;
}

/*================================================================================================
/ User                                Date                       Breif
/=================================================================================================
/ Yousif ahmed                     22Sep2026                    Initial Creation
*/