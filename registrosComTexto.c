#include <stdio.h>
#include <stdlib.h>
int main(){
    char name[50][50],endereco[5][50],cidade[5][50],telefone[5][50];
    char cpf[5][50];
    int i,j,quant;
    FILE *arquivo;

    printf("Quantas pessoas serão cadastradas ? \n");
    scanf("%d", & quant);

    for(i=0;i<quant;i++){
        printf("Digite nome: ");
        fflush(stdin);

        gets(name[i]);
        printf("Digite endereco: ");
        fflush(stdin);

        gets(endereco[i]);
        printf("Digite cidade: ");
        fflush(stdin);

        gets(cidade[i]);
        printf("Digite estado: ");
        fflush(stdin);

        gets(telefone[i]);
        printf("Digite CPF/CNPJ: ");
        fflush(stdin);

        gets(cpf[i]);
    }
    printf("\n-------------------------------------------------------------------------------\n");
    printf("Cadastros Realizados\n\n");
    for(i=0;i<quant;i++){
        printf("NOME ------: %s\n",name[i]    );
        printf("ENDERECO --: %s\n",endereco[i]);
        printf("CIDADE ----: %s\n",cidade[i]  );
        printf("TELEFONE ----: %s\n",telefone[i]  );
        printf("CPF/CNPJ --: %s\n",cpf[i]     );
    }

    arquivo=fopen("nome_do_arquivo.txt","w");
    for(i=0;i<quant;i++){
        fprintf(arquivo,"%s\n",name[i]);
        fprintf(arquivo,"%s\n",endereco[i]);
        fprintf(arquivo,"%s\n",cidade[i]);
        fprintf(arquivo,"%s\n",telefone[i]);
        fprintf(arquivo,"%s\n",cpf[i]);
    }
    fclose(arquivo);
    arquivo=fopen("nome_do_arquivo.txt","r");
    if(arquivo==NULL){printf("Erro No Arquivo");exit(1);}
    i=0;
    while( fgets(name[i],sizeof(name[i]),arquivo)!=NULL && fgets(endereco[i],sizeof(endereco[i]),arquivo)!=NULL
    && fgets(cidade[i],sizeof(cidade[i]),arquivo)!=NULL && fgets(telefone[i],sizeof(telefone[i]),arquivo)!=NULL
    && fgets(cpf[i],sizeof(cpf[i]),arquivo)!=NULL )
    {
        name[i][strlen(name[i])-1]='\0';
        endereco[i][strlen(endereco[i])-1]='\0';
        cidade[i][strlen(cidade[i])-1]='\0';
        telefone[i][strlen(telefone[i])-1]='\0';
        cpf[i][strlen(cpf[i])-1]='\0';

        i++;
    }
    fclose(arquivo);
    printf("\n\n");
    for(i=0;i<quant;i++)
    {
        printf("Nome ------> %s\n",name[i]);
        printf("Endereço --> %s\n",endereco[i]);
        printf("Cidade ----> %s\n",cidade[i]);
        printf("Telefone ----> %s\n",telefone[i]);
        printf("cpf -------> %s\n\n",cpf[i]);
    }
    system("pause");
    return 0;
}