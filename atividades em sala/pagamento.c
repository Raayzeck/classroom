#include <stdio.h>

int main()
{
    int matricula;
    int resto = 0;
    printf("Digite o número da sua matricula:");
    scanf("%d", &matricula);

    resto = matricula % 10;

    switch (resto)
    {
        case 0: printf("Pagamento em Janeiro\n");
            break;
        case 1: printf("Pagamento em Fevereiro\n");
            break;
        case 2: printf("Pagamento em Março\n");
            break;
        case 3: printf("Pagamento em Abril\n");
            break;
        default: printf("Pagamento em Maio\n");
    }
    return 0;
}