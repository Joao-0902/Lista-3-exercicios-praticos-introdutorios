#include <stdio.h>
#include <string.h>

int main(){
    int op = 1;
    while(op){
        char fr[120];
        printf("Escreva uma frase: ");
        gets(fr);
        fr[strlen(fr)];
        int t = strlen(fr);
        printf("Tamanho : %d\n" , t);

        printf("Deseja continuar? Digite 0 para sair \n");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}
