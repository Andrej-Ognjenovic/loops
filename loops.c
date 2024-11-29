#include<stdio.h>

int main(){

printf("check if numbers from 1 to 10");


for (int i = 0; i <= 10; i++)
{
    char result = (i%2==0) ? 'E' : 'O';
    printf("%d is %c \n", i, result);


}


int j =20;

while (j<=40)
{
   
    char result = (j%2==0) ? 'E' : 'O';
    printf("%d is %c \n", j, result);
    j += 2;


}
}