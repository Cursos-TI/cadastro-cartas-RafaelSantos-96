#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;
    

    printf("Digite a primeira nota:", nota1);
    scanf("%f", &nota1);
    printf("Digite a segunda nota:", nota2);
    scanf("%f", &nota2);
    printf("Digite a terceira nota:", nota3);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A média é: %.2f\n", media);

    





}