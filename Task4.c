#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
int n;
int one=0, cnt =2, two=1, fibnum;


printf("Enter the nth number for the Fibonacci\n");
scanf("%d", &n);

printf("the Fibonacci numbers are %d, ", one);
while(cnt<n)
{
    fibnum= one + two;
    cnt++;
    printf("%d, ", fibnum);

    one = two;
    two =fibnum;
    




}










}