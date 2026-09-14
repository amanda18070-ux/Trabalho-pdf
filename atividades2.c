#include<stdio.h>
#include<stdlib.h>

typedef struct {

 int inscricao;
 char nome[100];
 int classe;
 float horas_normais;
 float horas_extras;
}
funcionarios;

int main() {
  
  funcionarios;
  float salario_referencia;
  float salario_hora;
  float salario_normal;
  float salario_extra;
  float salario_bruto;
  float inss;
  float salario_liquido;
  
  printf("digite o salario de referencia:");
  scanf("%f",&salario_referencia);
  
for(int i=0; i<100;i++) {
    printf("\n funcionarios %d \n", i+1);
    printf("numero de inscricao:");
    scanf("%d",&funcionarios.inscricao);
    
    printf("nome:");
    scanf("%s",funcionarios.nome);
    
    printf("classe (1 ou 2):");
    scanf("%d",&funcionarios.classe);
    
    printf("horas normais:");
    scanf("%f",&funcionarios.horas_normais);
    
    printf("horas extras:");
    scanf("%f",&funcionarios.horas_extras);
    
    if (funcionario.classe==1) {
        salario_hora= salario_referencia*1.3;
    } else {
        salario hora=salario_referencia *1.9;
    }
    
    salario_normal=salario_hora*funcionarios.horas_normais;
    salario_extra=salario*1.3*funcionarios.horas_extras;
    salario_bruto=salario_normal+salario_extra;
    inss=salario_bruto*0.11;
    salario_liquido=salario_bruto-inss;
    
    printf("\n=========\n");
    printf("numero de inscricao:%d\n",funcionarios.inscricao);
    printf("nome:%s\n",funcionarios.nome);
    printf("salario horas normais:%.2f\n",salario_normal);
    printf("salario horas extras:%.2f\n",salario_extra);
    printf("deducao inss:%.2f\n",inss);
    printf("salario liquido:%.2f\n", salario_liquido);
    printf("=============================\n");
}

return 0;
}
    
    
}
