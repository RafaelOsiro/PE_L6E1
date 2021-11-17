/*
UNIVERSIDADE CATÓLICA DE BRASÍLIA
CURSO: ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
DISCIPLINA: PROGRAMAÇÃO ESTRUTURADA
DOCENTE: JOYCE SIQUEIRA
DISCENTE: RAFAEL RIKI OGAWA OSIRO (UC21100716)

Exercício: 1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando notação 
de ponteiro.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[3], *index;
    index = array;

    for (int i = 0; i < 3; i++)
    {
        printf("DIGITE UM N\351MERO: ");
        scanf("%d", (index + i));
        index++;
        system("cls");
    }

    index = array;
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(index+i));
        index++;
    }

    return 0;
}