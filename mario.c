#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h=get_int("Height:");
    }
    while(h<1||h>8);
    for(int x=0;x<h;x++)
   {
    for(int z=h-1;z>x;z=z-1)
   {
     printf(" ");
   }
    for(int y=-1;y<x;y++)
   {
    printf("#");
   }
    printf("  ");
    for(int c=-1;c<x;c++)
{
    printf("#");
}      
printf("\n");
}
}
