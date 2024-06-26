#include <stdio.h>
#include <stdlib.h>

// Struct é uma forma de agrupar variáveis de tipos diferentes em um único objeto.

void structureCarro(){
    // Syntaxe: struct nomeDaStruct{tipo1 variavel1; tipo2 variavel2; ...};
    struct carro{
        char *marca;
        char *modelo;
        int ano;
        float preco;
    } carro2; // Posso declarar um objeto do tipo struct carro aqui mesmo
    // Declaração de um objeto do tipo struct carro
    // Syntaxe: struct nomeDaStruct nomeDoObjeto;
    struct carro carro1;
    struct carro *ponteiroCarro = &carro1; // Declaração de um ponteiro para a struct carro
    carro1.marca = "Fiat uno";
    carro1.modelo = "Mille";
    carro1.ano = 2005;
    carro1.preco = 10000.00;
    carro2.marca = "Chevrolet";

    printf("Marca: %s\n", carro1.marca);
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    printf("Marca carro 2: %s\n", carro2.marca);
    printf("Preco: %.2f\n\n", carro1.preco);
}

void structurPessoa(){
    // Outra forma de declarar uma struct
    // Com o typedef, não é necessário usar a palavra chave 'struct' para declarar um objeto do tipo Pessoa
    typedef struct {
        char *nome;
        int idade;
        float altura;
    } Pessoa;
    
    Pessoa pessoa1;
    Pessoa *ponteiroPessoa;
    pessoa1.nome = "Joao";
    pessoa1.idade = 25;
    pessoa1.altura = 1.75;

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);
}

    struct num {
        //int a = 40; // Não é possível inicializar variáveis dentro de uma struct
        int a;
        int b;
    };
    /*
    Para que uma função possa retornar uma struct e
    essa struct seja utilizável em outras partes do seu programa,
    como em outras funções ou no main, é necessário que
    a definição da struct esteja no escopo global. 
    */
struct num inicializandoVariaveis( int a,int b){

    struct num n1 = {10, 20}; // É possível inicializar variáveis na declaração de um objeto do tipo struct
    struct num n2 = {a,b};
    return n2;
}

    
    void ponteiroParaStruct(){
    typedef struct{
        char *nome;
        char *poder;
        int vida;
        int forca;
        int velocidade;
        int defesa;
        
    } Super_Heroi;
        Super_Heroi heroi1 = {"Mago", "Magia Negra", 100, 50, 70, 20};  // Instância da struct com valores iniciais
        Super_Heroi *ponteiroHeroi; // Declaração do ponteiro para a struct
        ponteiroHeroi = &heroi1; // Atribuição do endereço da struct ao ponteiro
        printf("Nome: %s\n", heroi1.nome); // Acessando os membros da struct diretamente
        printf("Nome: %s\n", (*ponteiroHeroi).nome); // Acessando os membros da struct através do ponteiro, usando o operador de desreferência (*)
        printf("Nome: %s\n", ponteiroHeroi->nome); // Acessando os membros da struct através do ponteiro, usando o operador ->
    
        }

    void inicializacaoDesignada(){
        typedef struct{
            int a;
            int b; 
            int c;
        } Struct;

        Struct estrutura = {.b = 20, .c = 40, .a = 10 };
        printf("a: %d\nb: %d\nc: %d\n", estrutura.a, estrutura.b, estrutura.c);

    }


int main(){

   // structureCarro();
   // structurPessoa();

    // struct num n = inicializandoVariaveis(23, 43);
    // for(int i = 0; i < 10; i++){
    //     printf("a: %d\n", n.a);
    //     printf("b: %d\n", n.b);
    // }

    //ponteiroParaStruct();
    inicializacaoDesignada();

 return 0;
}