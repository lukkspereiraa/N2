#include <stdio.h>
#include <math.h>

double calcularAreaDoCirculo(double raio) {
    return 3.14 * pow(raio, 2);
}

int main() {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    double area = calcularAreaDoCirculo(raio);
    printf("A área do círculo é: %lf\n", area);

    return 0;
}
