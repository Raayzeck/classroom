#include <stdio.h>

int main()
{
    int A, B;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &A, &B);

    if((A%2) == 0)
    {
        if((B%2) == 0)
        {
            printf("Os dois numeros sao pares!\n");
        }
        else
        {
            printf("O primeiro numero eh par e o segundo eh impar!\n");
        }
    }
    else
    {
        if((B%2) == 0)
        {
            printf("O primeiro eh impar e o segundo par!\n");
        }
        else
        {
            printf("Os dois sao impares!\n");
        }
    }
    return 0;
}