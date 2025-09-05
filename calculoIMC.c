#include <stdio.h>

int main() {
    char nome[] = "jose vanderson";
    int idade = 21;
    double peso = 54.0;
    double altura = 164; // em cm
    double imc = peso / (altura * altura);

    printf("%s\n", nome);
    printf("sua idade é %d\n", idade);
    printf("seu peso é %.1f kg\n", peso);
    printf("sua altura é %.0f cm\n", altura);
    printf("seu imc é %f\n", imc);

    return 0;
}
