#include<stdio.h>

char nome[5] [50], diaDeCadastro[5] [50], tipoDeProduto[5] [50], fornecedor[5] [50];
int idProduto, quantidadeProduto, i=1, qntExec;

int main (void){
    
    printf("Digite quantos produtos serao cadastrados:\n");
 scanf("%d", &qntExec);

    for (i=0; i < qntExec; i++){
            printf("Qual a data de cadastro desse produto?");
        scanf("%s", &diaDeCadastro);

            printf("Qual tipo desse produto"); //Colocar as opçoes de tipos para o usuario escolher e de acordo com a opçao mandar instruçoes diferentes
        scanf("%s", &tipoDeProduto);

            printf("");
        scanf("%s", &);

            printf("");
        scanf("%s", &);

            printf("");
        scanf("%s", &);
    }
}