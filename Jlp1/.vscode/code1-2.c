#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Введи первое число: ");
    scanf("%d", &num1);
    printf("Введи второе число: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("сумма чисел %d и %d равна %d\n", num1, num2, sum);

    return 0;
}