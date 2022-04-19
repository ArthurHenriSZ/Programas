#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
 
 int diaria = 30; // variável da diária do encanador
 int dias = 0; // variável para as quantidades de dias trabalhados
 float impostoderenda = 0.08; // variável para a taxa do imposto de renda
 float total = 0; // variável para o recebimento total do encanador
 
 scanf("%i", &dias);
 total = (diaria * dias) - (diaria * dias * impostoderenda);
 printf("%.2f", total);
    return 0;
}