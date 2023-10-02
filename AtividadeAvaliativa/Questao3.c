#include<stdio.h>
#include<math.h>

main(){
    float a, b, c;
    
    printf("Digite os valores dos lados do triangulo (A, B, C, para definir sua classificacao:");
    scanf("%f %f %f", &a, &b, &c);
    
if (a < b + c && b < a + c && c < a + b){

    if (a == b && b == c) {

    printf("\nTriangulo equilatero.");

    } else if (a != b && b != c && c != a){

    printf("\nTriangulo escaleno.");

    } else {

    printf("\nTriangulo isosceles.");
    
    }

    } else {

    printf("\nNao equivale a um triangulo.");

    }
}