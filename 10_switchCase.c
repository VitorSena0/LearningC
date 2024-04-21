#include <stdio.h>
#include <stdlib.h>

int main(){
    int loop = 1;
while(loop){
    int opcao;
    printf("1 - Cadastrar produto\n2 - Listar produtos\n3 - Editar produto\n4 - Excluir produto\n5 - Sair\n\n");
    scanf("%d", &opcao);
    switch(opcao){ // Pode substituir a opção por caracteres
        case 1:
            printf("Cadastrando produto\n");
            break;
        case 2:
            printf("Listando produtos\n");
            break;
        case 3:
            printf("Editando produto\n");
            break;
        case 4:
            printf("Excluindo produto\n");
            break;
        case 5:
            printf("Saindo\n");
            loop = 0; // Encerra o loop
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
}
    return 0;
}