#include<stdio.h>
#include<stdlib.h>
typedef struct registro {
 char nome[100];
 float salario;
 int idade;
 char sexo;
}
registro;
int main() {
    registro pessoa;
    printf("digite o nome:");
    scanf("%s",pessoa.nome);
    
    printf("digite a idade:");
    scanf("%d",&pessoa.idade);
    
    printf("digite o salario:");
    scanf("%f",&pessoa.salario);
    
    printf("digite o sexo:");
    scanf("%c",&pessoa.sexo);
    
    return 0;


