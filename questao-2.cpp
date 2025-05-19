/*Dado um número inteiro n, desenvolver uma solução
que exiba um ‘triângulo’ de números como nos
exemplos a seguir:
Exemplo 1:
n = 4
1
1 2
3 2 1
1 2 3 4
3 2 1
1 2
1
Exemplo 2:
n = 6
1
1 2
3 2 1
1 2 3 4
5 4 3 2 1
1 2 3 4 5 6
5 4 3 2 1
1 2 3 4
3 2 1
1 2
1
*/

//------------------------------------------------------------------------//

//Utilizando For

FOR

#include <stdio.h>

int n;

void main() {
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    // Parte superior do triângulo
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            for (int j = i; j >= 1; j--) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    // Parte inferior do triângulo
    for (int i = n - 1; i >= 1; i--) {
        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            for (int j = i; j >= 1; j--) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

//------------------------------------------------------------------------//

//Utilizando Whilde

WHILE

#include <stdio.h>

int n;
int i = 1;

void main() {
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    // Parte superior do triângulo
    while (i <= n) {
        int j;
        if (i % 2 == 1) {
            j = 1;
            while (j <= i) {
                printf("%d ", j);
                j++;
            }
        } else {
            j = i;
            while (j >= 1) {
                printf("%d ", j);
                j--;
            }
        }
        printf("\n");
        i++;
    }

    // Parte inferior do triângulo
    i = n - 1;
    while (i >= 1) {
        int j;
        if (i % 2 == 1) {
            j = 1;
            while (j <= i) {
                printf("%d ", j);
                j++;
            }
        } else {
            j = i;
            while (j >= 1) {
                printf("%d ", j);
                j--;
            }
        }
        printf("\n");
        i--;
    }
}

//------------------------------------------------------------------------//

//Utilizando Do While

DO WHILE

#include<stdio.h>

int n;
int i = 1;

void main() {
printf("Digite um numero inteiro: ")
scanf("%d", &n);
//Parte superior do triângulo
    do {
        int j;
        if (i % 2 == 1) {
            j = 1;
            do {
                printf("%d ", j);
                j++;
            } while (j <= i);
        } else {
            j = i;
            do {
                printf("%d ", j);
                j--;
            } while (j >= 1);
        }
        printf("\n");
        i++;
    } while (i <= n);

    // Parte inferior do triângulo
    i = n - 1;
    do {
        int j;
        if (i % 2 == 1) {
            j = 1;
            do {
                printf("%d ", j);
                j++;
            } while (j <= i);
        } else {
            j = i;
            do {
                printf("%d ", j);
                j--;
            } while (j >= 1);
        }
        printf("\n");
        i--;
    } while (i >= 1);
}

//------------------------------------------------------------------------//
