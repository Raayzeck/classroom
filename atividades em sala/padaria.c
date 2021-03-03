#include <stdio.h>
main(){

    int broa, pao;
    float fbroa, fpao, valortotal, lucro;

    printf("Bem vindo(a) a padaria da UFF! Vamos iniciar o trabalho?\n");
    printf("\nDigite quantas broas foram vendidas:\n");
    scanf("%d", &broa);
    fbroa = broa*2.50;
    printf("\nVoce vendeu %d broas por: R$%.2f.\n", broa, fbroa);
    printf("\nDigite quantos paes foram vendidos:\n");
    scanf("%d", &pao);
    fpao = pao*0.35;
    printf("\nVoce vendeu %d paes por: R$%.2f.\n\n------------------\n", pao, fpao);
    
    valortotal = fbroa+fpao;
    printf("Voce vendeu R$%.2f ao todo.\n", valortotal);
    lucro = valortotal*0.12;
    printf("Parabens! Voce trabalhou o dia todo para ter de lucro apenas R$%.2f.\nAgradecemos por manter o capitalismo vivo e ser um escravo do sistema.\nTenha um excelente dia!\n------------------", lucro);
    return 0;
} 