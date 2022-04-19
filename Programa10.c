#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main (){
float primeiro = 0;
float segundo = 0;
float terceiro = 0;
float premio = 780000.00;

primeiro = premio * 0.46;
segundo = premio * 0.32;
terceiro = premio * (1 - (0.46+0.32));

printf("%.2f\n%.2f\n%.2f\n", primeiro, segundo, terceiro);

    return 0;
}