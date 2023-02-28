#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int opc;
    float valA, valB, valC, desc, total, porc, soma, valorTotal = 0;

    // primeiro curso

    printf("Valor do curso A: ");
    scanf("%g", &valA);
    system("CLS");

    // segundo curso

    printf("Valor do curso B: ");
    scanf("%g", &valB);
    system("cls");

    printf("Deseja adicionar mais um curso? \n");
    printf("1 - SIM \n");
    printf("2 - NAO \n");
    scanf("%d", &opc);
    system("cls");

    if (opc == 1)
    {

        printf("Valor do curso C: ");
        scanf("%g", &valC);
        system("cls");

        soma = valA + valB + valC;
        desc = soma * 15 / 100;
        total = soma - desc;
        valorTotal = valorTotal + total;

        printf("O valor total é: %g \n", valorTotal);
        printf("Você economiza: %g", desc);
    }
    else
    {

        soma = valA + valB + valC;
        desc = soma * 10 / 100;
        total = soma - desc;
        valorTotal = valorTotal + total;

        printf("O valor total é: %g \n", valorTotal);
        printf("Você economiza: %g", desc);
    }

    // system("pause");
    return 0;
}