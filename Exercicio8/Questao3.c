#include<stdio.h>
#include<math.h>


main(){

int n;
int fibonacci(int n) {

if (n <= 0) {

return 0;

} else if (n == 1) {

    return 1;

} else {

    return fibonacci(n - 1) + fibonacci(n - 2);

    }
}

printf("Digite um valor numerico: ");
scanf("%d", &n);

if (n < 0) {

    printf("\nO valor de n deve ser maior ou igual a zero.");

} else {
    int resultado = fibonacci(n);
    printf("\nO %d termo da sequencia de Fibonacci equivale: %d", n, resultado);
}

}