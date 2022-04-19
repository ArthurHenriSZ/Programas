#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
 
 int peso = 0; // variável peso
 float altura = 0; // variável altura
 float IMC = 0; // variável IMC
 
 scanf("%i%f", &peso, &altura);
 IMC = peso / (altura * altura);
 printf("%.2f", IMC);
 
    return 0;
}