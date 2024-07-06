#include <stdio.h>
#include <stdlib.h>

int main(int argc , char** argv) {
 // args -> argv
 char** args = argv;
 // pargs -> args -> argv
 char *** pargs = &args;
 // Imprimindo parâmetros da main
 printf("main(%i, %s)\n", argc , args [0]);
 if(argc > 4)
    printf("main(%i, %s)\n", argc , args [4]);
 else
    printf("\nErro: Nao ha argumentos suficientes para acessar argv[4].\n\n");
 printf("main(%i, %s)\n", argc , (* pargs)[0]);
 printf("main(%i, %s)\n", argc , (* pargs)[2]);
 // Retornando zero
 return 0;
 }

// int main(int argc, char **argv)
// {
//     int a, b;
    
//     a = atoi(argv[1]);
//     b = atoi(argv[2]);

// 	printf("Resulta a: %d\n", a);
// 	printf("Resulta b: %d", b);    	

//     return 0;
// }