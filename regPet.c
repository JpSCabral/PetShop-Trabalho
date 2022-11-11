#include<stdio.h>
#include<stdlib.h>
main (void){
int idade, cpf, quant;
char nome, genero, raca;
    
    printf("Digite quantos Pets serao cadastrados:\n");
 scanf("%d", &quant);

   for (i=0; i < quant; i++){
    printf("Digite o nome do Pet:\n");
    scanf("%s", &nome);
    fflush (stdin);

    printf("Digite a idade do Pet:\n");
    scanf("%s", &idade );
    fflush (stdin);

    printf("Digite o genero do Pet:\n");
    scanf("%s", &genero );
    fflush (stdin);
    
    printf("Digite a raca do Pet:\n");
    scanf("%s", &raca );
    fflush (stdin);

    printf("Digite o CPF do tutor:\n");
    scanf("%s", &cpf);
    fflush (stdin);
  }
  return 0;
}
