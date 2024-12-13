#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

int num;

bool yes =true;
    while (yes=true)
    {
        printf("Enter a positive number\n");
        scanf("%d", &num);

        int factorial = 1;
        if(num>0)
        {
            for (int i=num; i>0; i--)
            {
                factorial = i*factorial;
                printf("the factorial currently is %d\n", factorial);




            }
            printf("the factorial of %d is %d", num, factorial);
            yes=false;

        }
        else
        {

            printf("This number is not positive\n");


        }












    }



return 0;

}