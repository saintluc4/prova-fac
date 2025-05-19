/*
Por meio das equações de Pell, é possível alcançar
uma aproximação inteira para a raiz quadrada de um
número inteiro positivo. Para calcular a
aproximação, deve-se subtrair consecutivamente
dos resultados do valor a ser extraído a raiz, os
números ímpares 1, 3, 5, ... até que o valor a ser
subtraído seja maior que o resultado.
Exemplo:
número = 19 19 – 1 = 18
            18 – 3 = 15
            15 – 5 = 10
            10 – 7 = 3
            A próxima operação seria 3 – 9, mas como 3 é
            menor do que 9, a sequência de subtrações
            deve parar. Como 4 subtrações foram
            efetuadas, então a resposta é 4.
Implementar um programa que, através das
equações de Pell, determine a raiz quadrada
aproximada de um número inteiro fornecido pelo
usuário.
*/

//------------------------------------------------------------------------//
#include <stdio.h>

int num;
int i = 0;

void main(){
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i+=2){
    
    int resulY;;
    
    resulY = num - i;
    printf("%d - %d = %d \n", num , i, resulY);
    num = resulY;
    
    }
}
//------------------------------------------------------------------------//
