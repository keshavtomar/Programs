#include <stdio.h>

// if we can take input from scanf function, then what is the use of getchar function

int main(void)
{
    float x;
    int a = 5, b = 2;

    x = 9.0 / 5; // int/int => int ,  int*int = int              1.8=> 1         //float/int or int/float=> float
                 //(float)9 =>  9.00000

    printf("%f", x); // 1.80000
}