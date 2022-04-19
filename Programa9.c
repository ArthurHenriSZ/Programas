#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
 
 float metros = 0;
 float acre = 0;
 scanf("%f", &metros);
 acre = metros * 0.000247;
 printf("%.3f", acre);
 
    return 0;
}