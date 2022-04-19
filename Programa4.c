#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
 
 int celsius = 0;
 float fareheint = 0;
 scanf("%i", &celsius);
 fareheint = (celsius * 1.8) + 32;
    if (fareheint <= 77){
        printf("O clima ");
        printf("%.1f", fareheint);
        printf(" esta frio.");
 }
    else if (fareheint > 77){
        printf("O clima ");
        printf("%.1f", fareheint);
        printf(" esta quente.");
    return 0;

    }        
    }