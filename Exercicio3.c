#include <stdio.h>
#include <string.h>

int main(){
    int op = 1;
    while(op){
        char str1[50];
        char str2[50];

        printf("Digite a primeira palavra ou nome: ");
        scanf("%s", &str1);
        str1[strlen(str1)];
        printf("Digite a segunda palavra ou nome: ");
        scanf("%s", &str2);
        str2[strlen(str2)];

        puts(strcat(str1, str2));

        printf("Deseja sair? Digite 0 para sair\n");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }

    return 0;
}
