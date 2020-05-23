#include <stdio.h>
#include <locale.h>

int main(void){

    int A = 10;
    printf ("\nValor de A = 10\n");

    int B = 20;
    printf ("Valor de B = 20\n\n");

    if (A==10){                                                  // se a condição de A = 10 for verdadeira, a keyword if executará a função printf 
    printf ("A é igual a 10.\n");
    }

    if (B==10){                                                  // se a condição de B = 10 for verdadeira, a keyword if executará a função printf 
    printf ("B é igual a 10.\n");
    }
 
    if (A<B){                                                    // se a condição de A < B for verdadeira, a keyword if executará a função printf 
    printf ("A é menor que B\n");
    }

    if (A!=B){                                                   // se a igualdade de A e B for falsa, a keyword if executará a função printf 
   printf ("A não é igual a B\n\n");
    }

return 0; 
}