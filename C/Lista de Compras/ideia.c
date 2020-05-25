#include <stdio.h>
#include <locale.h>

int main(void){

char item_1;
char item_2; 

    setlocale (LC_ALL, "Portuguese");
    printf ("\nInsira um único item por vez\n");
    
    scanf  ("%c", &item_1);
    printf ("Item %c adicionado, insira o próximo item: \n", item_1);
    scanf  ("%c",item_2);
    printf ("Item %c adicionado.");
    }                                                                                                                                                              
