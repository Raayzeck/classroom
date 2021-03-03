#include  <stdio.h>

int main()
{
  int escolha;
  printf("Vc vai digitar as coisas em metros ou centimetros?\n Digite [1] para metros\n Digite [2] para centimetros\n");
  scanf("%d", &escolha);

  if(escolha == 1)
  {
    float mtamanhoP, mtamanhoS, msombraP;
    
    printf("Digite a sua altura em metros:\n");
    scanf("%f", &mtamanhoP);
    printf("Digite o tamanho da sua sombra em metros:\n");
    scanf("%f", &mtamanhoS);
    printf("Digite o tamanho da sombra do predio em metros:\n");
    scanf("%f", &msombraP);

    float mvalorfinal = (mtamanhoP*msombraP)/mtamanhoS;
    printf("O tamanho do predio em metros eh %.2f", mvalorfinal);
    return 0;
  }
  if(escolha == 2)
  {
    int tamanhoP, tamanhoS, sombraP;
    printf("Digite a sua altura em centimetros:\n");
    scanf("%d", &tamanhoP);
    printf("Digite o tamanho da sua sombra em centimetros:\n");
    scanf("%d", &tamanhoS);
    printf("Digite o tamanho da sombra do predio em centimetros:\n");
    scanf("%d", &sombraP);

    int valorfinal = (tamanhoP*sombraP)/tamanhoS;
    printf("O tamanho do predio em centimetros eh %d", valorfinal);
    return 0;
  }

  if(escolha > 2 || escolha < 1)
  {
    printf("po man escolhe certo\n");
    return 0;
  }
  return 0;
}