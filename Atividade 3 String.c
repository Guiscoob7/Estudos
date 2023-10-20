/*Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct teste
    {
    char frase[100];
    int cont, tamanho, espaco;

    }teste;

    teste.espaco = 1;
    teste.cont = 0;
    fgets(teste.frase,100,stdin);
    teste.tamanho = strlen(teste.frase);
    teste.frase[teste.tamanho-1] = '\0';

    for (int i = 0; teste.frase[i] != '\0'; i++){
        if (teste.frase[i] == ' ')
             teste.espaco = 1;

        else if (teste.espaco == 1){
            teste.cont++;
            teste.espaco = 0;
        }

    }
    printf("\nA quantidade de palavras na frase: ´´ %s ´´ é igual a: %d\n", teste.frase, teste.cont);

}
