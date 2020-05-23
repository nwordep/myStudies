#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale (LC_ALL, "Portuguese");

    int a = 1;
    printf ("O Data Type de 'a' é int. Seu valor é de %d\n", a);  // o valor int indica que a variavél guarda um número inteiro.                                        

    float b = 2.2; 
    printf ("O Data Type de 'b' é float. Seu valor é de %0.1f\n", b); // float indica que a variavél guarda um número real.

    char c = 'Z';

    printf ("O Data Type de 'c' é char. Seu valor é de %c\n", c); // char indica que a variavél guarda um único caractere.  

    return;
}