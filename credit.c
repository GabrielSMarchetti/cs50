#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
long cartao=get_long("Number:");
   int soma=0;
   int i=2;
   int dobro=0;
   int somadobro;
   long sucessor;
   long antecessor;
   long antecessor2;
   long doze=pow(10, 12);
   long treze=pow(10, 13);
   long quat=pow(10, 14);
   long quinze=pow(10, 15);
   long dezes=pow(10, 16);
   long dezen=pow(10, 17);
   do
   {
       sucessor=pow(10, i);
       antecessor=pow(10, (i-1));
       antecessor2=pow(10, (i-2));
       dobro= 2*(cartao%sucessor-cartao%antecessor)/antecessor;
       somadobro = (dobro%100-dobro%10)/10 + dobro%10;
       soma = ((cartao%antecessor - cartao%antecessor2)/antecessor2) + somadobro + soma ;
       i=i+2 ;
   }
    while(cartao%antecessor != cartao );
    if( soma % 10 == 0)
    {
        if((cartao%dezes)==cartao && ((cartao%dezes-cartao%treze)/treze==34 || (cartao%dezes-cartao%treze)/treze==37))
        {
                printf("AMEX\n");
        }
        else if(cartao%dezen==cartao && (cartao%dezen-cartao%quat)/quat>50 && (cartao%dezen-cartao%quat)/quat<56)
        {
            printf("MASTERCARD\n");      
        }
     else if((cartao%quat==cartao || cartao%dezen==cartao) && ((cartao%quat-cartao%doze)/doze == 4 || (cartao%dezen-cartao%quinze)/quinze == 4))
        {
            printf("VISA\n");
        }
            else
            {
                printf("INVALID\n");
            }
    }
    else
    {
        printf("INVALID\n");
    }
}
