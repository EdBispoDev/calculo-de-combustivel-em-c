#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas, float vEta);

int main()
{
    printf("######## EcoCAR ######## \n");

    float precoGasolina, precoEtanol;

    printf("Qual o preco da Gasolina? \n");
    scanf("%f", &precoGasolina);

    printf("Qual o preco do Etanol? \n");
    scanf("%f", &precoEtanol);

    int resultado = Calculo(precoGasolina, precoEtanol);

    if (resultado == 0)
    {
        printf("Compensa abastecer com Gasolina. \n");
    }
    else if (resultado == 1)
    {
        printf("Compensa abastecer com Etanol. \n");
    }
    else
    {
        printf("Sao equivalentes. \n");
    }

    return 0;
}

int Calculo(float vGas, float vEta)
{
    if ((vGas * 0.7) < vEta)
    {
        return 0;
    }
    else if ((vGas * 0.7) > vEta)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
