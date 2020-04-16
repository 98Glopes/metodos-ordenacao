#include<stdio.h>

void main(void)
{

    int input[] = {10, 12, 45, 23, 123, 23, 50, 11};
    int input_size = (sizeof input)/4;

    int menor_valor = 0;

    int i, j, k;
    int aux;

    for(i = 0; i < input_size; i++)
    {
        menor_valor = input[i];
        for(j = i+1; j < input_size; j++)
        {
            if(input[j] < menor_valor)
            {
                menor_valor = input[j];
                k = j;
            }


        }
        input[k] = input[i];
        input[i] = menor_valor;

    }

    for(i = 0; i < input_size; i++)
    {
     //   printf("%i", input[i]);
    }
}