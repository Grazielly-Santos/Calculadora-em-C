#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float a, b, resultado;
char op;

printf("\n---Calculadora em C---\n");

printf("Digite o 1° número: \n");
scanf("%f", &a);

printf("Digite o operador(+,-,*,/):\n");
scanf(" %c", &op);

printf("Digite o 2° número: \n");
scanf("%f", &b);

switch(op){
case'+':
    resultado = a+b;
    printf("\nResultado: %.2f\n", resultado);
    break;

case '-':
    resultado = a-b;
    printf("\nResultado: %.2f\n", resultado);
    break;

case '*':
    if(a == 0 || b == 0){
        printf("\nMultiplicação por zero!Resultado: %.2f\n", resultado);

    }else{
       resultado = a * b;
       printf("\nResultado: %.2f\n", resultado);
    }
     break;

case '/':
    if(b != 0){
        resultado = a/b;
        printf("\nResultado: %.2f\n", resultado);
    }else{
        printf("\nERRO: divisão por zero!\n");
    }
    break;
default:
    printf("\nOperador inválido!\n");

}

return 0;
}
