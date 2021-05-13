//Calcular a quantidades de moedas totais necessárias para fornecer um certo valor de troco
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float x;
    do
    {
        x = get_float("Change owed:");
    }
    while(x<0);
    int c=round(x*100);
    int v=round((c-c%25)/25);
    int d=round((c-v*25-c%10)/10);
    int ci=round((c-v*25-d*10-c%5)/5);
    int um=round(c-v*25-d*10-ci*5);
    printf("%i\n",(v+d+ci+um));
}
