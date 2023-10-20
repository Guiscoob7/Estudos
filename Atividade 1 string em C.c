/*Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais da frase digitada. O
programa deverá contar vogais maiúsculas e minúsculas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct exercicio {

        char frase[100], frase_final[100];
        int cont, cont_1, tamanho;

    }exercicio;

    exercicio.cont = 0;
    exercicio.cont_1 = 0;
    fgets(exercicio.frase,100,stdin);
    exercicio.tamanho = strlen(exercicio.frase);
    exercicio.frase[exercicio.tamanho-1] = '\0';

    for (int i = 0 ; exercicio.frase[i] != '\0'; i++){
        strcpy(exercicio.frase_final,exercicio.frase);
        exercicio.frase[i] = tolower(exercicio.frase[i]);
        if (exercicio.frase[i] == 'a' || exercicio.frase[i] == 'e' || exercicio.frase[i] == 'i' || exercicio.frase[i] == 'o' || exercicio.frase[i] == 'u')
            exercicio.cont++;
        else
            exercicio.cont_1++;
            }
            printf("Na frase:  ´´ %s ´´, a quantidade de vogais é igual a: %d. E a quantidade de consoantes é igual a: %d", exercicio.frase_final, exercicio.cont, exercicio.cont_1);

}
