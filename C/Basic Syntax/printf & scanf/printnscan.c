#include <stdio.h>
#include <locale.h>

int main () {         

     float A;                              
                                            
    printf ("Insira valor de A: \n");
    scanf  ("%g", &A);                             /* %lf lê a informação, e 
                                                    &A endereça a informação 
                                                    na memoria da variavel A */
                                        
    printf ("Valor de A: %g\n", A);         /* imprime o valor da variavel 
                                                guardada pela variavel */
 }    
