#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {

 float g = 0;
 float r = 0;
 scanf("%f", &g);
 r = g * (3.14/180);
 printf("%.2f", r);

    return 0;
}