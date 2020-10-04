#include <string.h>
#include <stdio.h>

int main(){
    int op = 1;
    char str2[] = "joao";
    while(op){
        char str1[20];
        printf("Digite um nome: ");
        scanf("%s", &str1);
        if(strcmp(str1, str2) == 0){
            printf("Sao iguais\n");
        }else{
            printf("Sao diferentes\n");
        }
        printf("Deseja continuar? digite 0 para sair: ");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}
