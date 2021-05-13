//Determinar, através de um algoritmo, a dificuldade de ler certa sentença
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int tamanho;
    int letras = 0;
    int palavras = 0;
    int periodos = 0;
    string texto = get_string("Text: ");
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        int letra = texto[i];
        int letraa = texto[i - 1];
        int letrad = texto[i + 1];
        if ((letra <= 90 && letra >= 65) || (letra <= 122 && letra >= 97))
        {
            letras = letras + 1;
        }
        else if (letra == 32 || (letra == 39 && letrad != 115))
        {
            palavras = palavras + 1;
        }
        else if ((letra == 46 && letraa != 46) || (letra == 33 && letraa != 33) || (letra == 63 && letraa != 63))
        {
            periodos = periodos + 1;
        }
    }
    palavras++;
    float L = letras * 100 / palavras;
    float S = periodos * 100 / palavras;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %0.f\n", index);
    }
}
