#include <stdio.h> 
#include <locale.h>

int main(void){
    
    setlocale (LC_ALL, "Portuguese");
    
    float A = 22.30;
    float B = 12.50;
    float C = 6.50;
    float D = A + B + C;

    printf ("\nCalculadora de Compras:\n\n");

    printf ("Pasta de Amendoim = R$%0.2f\n", A);
    printf ("Banana = R$%0.2f\n", B);
    printf ("Sucrilhos = R$%0.2f\n", C);
    printf ("\n****VALOR****\n");
    printf ("  *R$%0.2f\n\n", D);

    return 0;
}