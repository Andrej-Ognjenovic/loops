#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{

    int nums, rmd, rev=0;
    printf("Enter a number to check if its a palindrome\n");
    scanf("%d", &nums);

    int num = nums;
    while (num>0)
    {

        rmd = num % 10;
        rev = rev * 10 + rmd;
        num = num / 10;

        printf("%d,", rev);

        
    }

    if (rev == nums)
    {
        printf("\n %d is palindrome", nums);
    }
    else
    {
        printf("%d is not palindrome", nums);
    }
}