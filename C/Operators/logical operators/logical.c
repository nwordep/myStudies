#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale (LC_ALL, "Portuguese");

    int a = 1;
    int b = 0;

    if(a&&b){                                                                /* a%%b é um "logical and operator", sua condição verdadeira é se
                                                                                nenhum dos números for zero 0. */
    printf ("\nEsse valor nunca será impresso, pois um dos números é 0.\n"); 
    }

    if(a||b){                                                                /* || é um "logical or operator" sua condição verdadeira é se um dos
                                                                                   números é diferente de zero. */
    printf ("Esse valor será impresso, pois um dos números é diferente de zero.\n");
    }

   if (!(a&&b)){                                                            /* é um "logical NOT operator" inverte o resultado lógico de um 
                                                                               operator que interage. */                                                                               
   printf ("Este valor será impresso, pois o 'logical' > ! < atua sobre a falsidade.\n");
   }
   
   return; 
}