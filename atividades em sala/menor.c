#include <stdio.h>
main()
{
    int a, b, c;
    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c)
        return printf("A eh o menor!");

    if(b < a && b < c)
        return printf("B eh o menor!");

    if(c < a && c < b)
        return printf("C eh o menor!");
    
    return 0;
}
