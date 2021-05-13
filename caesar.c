#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 2 && atoi(argv[1]) >= 1)
    {
        int numero= atoi(argv[1]);
        string entrada = get_string("plaintext:");
        printf("ciphertext:");
        for (int i = 0, n = strlen(entrada); i < n; i++)
        {
            int letra = entrada[i];
            if (letra >= 97 && letra <= 122)
            {
                printf("%c", (((letra - 97) + numero) % 26) + 97);
            }
            else if (letra >= 65 && letra <= 90)
            {
                printf("%c", (((letra - 65) + numero) % 26) + 65);
            }
            else
            {
                printf("%c", letra);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
