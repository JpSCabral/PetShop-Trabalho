#include <stdio.h>

char nome[5] [50], endereco[5] [50],email[5] [50],cpf[5] [50], senha [5] [50];
int i=1, quant, verificacao;
int main (){
 printf("Digite quantos clientes serao cadastrados:\n");
 scanf("%d", &quant);

   for (i=0; i < quant; i++){
    printf("Digite o nome do cliente:\n");
    scanf("%s", & nome);
    fflush (stdin);
    
    printf("Digite o endereço do cliente:\n");
    scanf("%s", & endereco);
    fflush (stdin);

    printf("Digite o email do cliente:\n");
    scanf("%s", & email);
    fflush (stdin);

    printf("Digite o CPF do cliente:\n");
    scanf("%s", & cpf);
    fflush (stdin);

    printf("Digite a senha do cliente:\n");
    scanf("%s", & senha);
    fflush (stdin);
   }  
      printf("Deseja visualizar os clientes cadastrados?\n 1-sim\n 2-nao\n");
      scanf("%d", &verificacao); 

      switch (verificacao){
         case 1:
               for (i=0; i < quant; i++){
            printf("Nome: %d\n", nome);
            printf("Endereco: %d\n", endereco);
            printf("Email: %d\n", email);
            printf("CPF: %d\n ---------------------\n", cpf);
         break;
         
         case 2:
            printf("Finalizado");
            break;
         default:
            printf("Opcao invalida");
            break;
         }
      }
}
