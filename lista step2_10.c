#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#define BUFLEN 1024
/*
Em programas que manipulam strings, a leitura de cada string é feita em um buffer com o tamanho máximo para as strings lidas.
Por exemplo, o código abaixo lê uma string de até 1024 caracteres (contando o '\0' final):
#define BUFLEN 1024 (...)
char buffer [BUFLEN];
fgets (buffer, BUFLEN, stdin);
Neste código, o buffer que contém a string possui tamanho 1024, mesmo que a string digitada seja simplesmente “oi”.
A maior parte do espaço não é usada. Além disso, se for necessário ler outra string usando o mesmo buffer, o conteúdo da primeira string digitada será substituído.
Nestas situações, uma forma de economizar memória é usar o buffer maior apenas para ler as strings, mas alocar cada nova string em outro espaço, que tem apenas o tamanho necessário.
Com base nisso, escreva uma função char* empacotaString (char* string), que recebe como parâmetro um buffer contendo uma string e retorna uma cópia da string, mas em um espaço que tem apenas o tamanho necessário.
A nova string deve ser alocada dentro da função, mas a responsabilidade de desalocá-la é do chamador.
*/

char *empacota(char *string){
    char *nova_string;
    int contador = 0;
    for(int x=0; string[x] != '\0'; x++){
        contador++;
    }
    nova_string = (char *)malloc(contador*sizeof(char));
    for(int x=0; x<contador; x++){
        nova_string[x] = string[x];
    }
    return nova_string;
}

int main(){
    system("cls");
    char *string_copiada;
    printf("Digite algo:\n");
    char buffer[BUFLEN];
    fgets(buffer, BUFLEN, stdin);
    string_copiada = empacota(buffer);
    printf("\n%s\n", string_copiada);
    return 0;
}