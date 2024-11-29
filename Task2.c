#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("Enter a number to see if it's prime:\n  ");
    scanf("%d", &a);
    int prime = 0;

    for (int i = 1; i<a; i++)
    {
        if (a%i == 0)
        {
            prime += 1;
            printf("%d\n", i);
        }


    }
    
    printf("%s",  (prime=1) ? "it's prime":"it's not prime");
   


return 0;






}