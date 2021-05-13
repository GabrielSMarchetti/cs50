#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2 && strlen(argv[1]) == 26)
    {
        for (int c = 0; c < strlen(argv[1]); c++)
        {
            int letra = argv[1][c];
            if((letra > 90 && letra <97) || letra < 65 || letra > 122)
            {
                printf("A chave deve conter 26 letras\n");
                return 1;
            }
        }
        for (int v = 0, letraM = 65, letram = 97; v < 26; v++, letraM++, letram++)
        {
            string ultimo, primeiro, ultimo2, primeiro2;
            ultimo = strrchr(argv[1], letraM);
            ultimo2 = strrchr(argv[1], letram);
            primeiro = strchr(argv[1], letraM);
            primeiro2 = strchr(argv[1], letram);
            if (primeiro != ultimo || primeiro2 != ultimo2 || (primeiro > 0 && primeiro2 > 0))
            {
                printf("A chave deve conter 26 caracteres diferentes entre si\n");
                return 1;
            }     
        }
        string frase = get_string("plaintext:");
        printf("ciphertext:");
        for (int i = 0, n = strlen(frase); i < n; i++)
        {
            int valorf = frase[i];
            if (valorf >= 65 && valorf <= 90)
            {
                int x = valorf - 64;
                printf("%c", toupper(argv[1][x - 1]));
            }
            else if (valorf >= 97 && valorf <= 122)
            {
                int z = valorf - 96;
                printf("%c", tolower(argv[1][z - 1]));
            }
            else
            {
                printf("%c", valorf);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("A chave deve conter 26 caracteres\n");
        return 1;
    }
}
