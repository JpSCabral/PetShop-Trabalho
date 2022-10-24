#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dia, servico, cpf;
char nomeTutor, nomePet, tipoTosa;

int main(void){
    setlocale (LC_ALL, "Portuguese");
    printf("Selecione o serviço que deseja\n 1 - Banho\n 2 - Tosa\n 3 - Banho e Tosa");
    scanf("%d", &servico);

    switch (servico){
    case 1:
        servico = "Banho";
        //printf("Digite o nome do tutor:\n");
            //scanf("%s", &nomeTutor);
        printf("Digite o CPF do tutor:\n");
            scanf("%d", &cpf);
        printf("Digite o nome do Pet:\n");
            scanf("%s", &nomePet);
        break;
    case 2:
        printf("Digite o CPF do tutor:\n");
            scanf("%d", &cpf);
        printf("Digite o nome do Pet:\n");
            scanf("%s", &nomePet);
        printf("Digite o tipo de tosa");
            scanf("%s", &tipoTosa);
    break;
    
    default:
        break;
    }
}