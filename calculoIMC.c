#include <stdio.h>

int main() {
    double peso, altura, imc;

    // Entrada
    printf("Digite seu peso (kg): ");
    scanf("%lf", &peso);

    printf("Digite sua altura (m): ");
    scanf("%lf", &altura);

    // Cálculo
    imc = peso / (altura * altura);

    // Classificação
    printf("IMC: %.2f - ", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc < 29.9) {
        printf("Sobrepeso\n");
    } else if (imc < 34.9) {
        printf("Obesidade grau I\n");
    } else if (imc < 39.9) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }

    return 0;
}
