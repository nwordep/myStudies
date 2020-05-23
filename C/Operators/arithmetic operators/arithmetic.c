#include <stdio.h>
#include <locale.h>

int main(void) {

    float a = 2.1;                                          
    printf ("\nValor de a = %0.1f\n", a);

    float b = 3.9;
    printf ("Valor de b = %0.1f\n\n", a);

    float c = a + b;                                            // relaciona as váriaveis atravez de operators
    printf ("Valor de a + b  = %0.1f\n", c);
    
    float d = a - b;
    printf ("Valor de a - b = %0.1f\n", d);

    float e = a * b;
    printf ("Valor de a . b = %0.2f\n", e);

    float f = a / b;
    printf ("Valor de a ÷ b = %0.2f\n\n", f);
    
    return;
}