#include <stdio.h>

double converterCelsiusParaFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = converterCelsiusParaFahrenheit(celsius);
    printf("%.2lf Celsius é equivalente a %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
