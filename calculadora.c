#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // O espaço antes de %c é para ignorar qualquer espaço em branco

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Erro: Operador inválido.\n");
            break;
    }

    return 0;
}