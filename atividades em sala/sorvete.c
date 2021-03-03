#include <stdio.h>

int main()
{
    char escolha;
    int quantidade;
    printf("Digite o sabor do sorvete:\n[C] para CHOCOLATE\n[M] para MORANGO\n");
    scanf("%c", &escolha);
    printf("Digite a quantidade de bolas do sorvete:\n");
    scanf("%d", &quantidade);
    float desconto = 0;
    if(escolha == 'C')
    {
        if(quantidade < 3)
        {
            desconto = 0.1;
        }
        else{
            desconto = 0.2;
        }
    }

    float valorfinal = (1.00+(.50*quantidade)) * (1.0 - desconto);
    printf("Valor total: R$%.2f", valorfinal);
    return 0;
}