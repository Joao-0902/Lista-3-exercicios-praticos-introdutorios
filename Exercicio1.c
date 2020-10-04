#include <string.h>
#include <stdio.h>

int main(){
    int op = 1;
    while(op){
        char v1[40];
        char v2[40];
        printf("Digite um nome: ");
        scanf("%s" , &v1);
        strcpy(v2, v1);
        printf("Copiado com sucesso! \n");
        puts(v2);
        printf("Deseja sair? 0 para sair ");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}
