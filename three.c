#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    float b;
    double c;

    printf("Enter an integer,float and double:\n");
    scanf("%d %f %lf", &a, &b, &c);

    double sum = a+ round(b)+ round(c);



    printf("The sum of %d, %f and %lf is %lf:\n", a, b, c, sum);


}