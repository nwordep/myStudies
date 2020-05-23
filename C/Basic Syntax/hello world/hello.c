#include <stdio.h>
#include <locale.h>                       // no caso, incluí as bibliotecas stdio, e locale.  

int main(void){                              // a função main é a função requerida por padrão ao rodar o programa. 

     setlocale (LC_ALL, "Portuguese");       // configura a biblioteca locale para o idioma Portugues. 
     
     printf ("- Olá, humano!\n");            // função printf que imprime seu conteúdo no console.
     printf ("- Olá, máquina!\n");   
          
     return;                                      // retorna o controle para função main. 
}