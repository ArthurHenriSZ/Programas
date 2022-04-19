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
 float jardas = 0;
 scanf("%f", &jardas);
 metros = jardas * 0.91;
 printf("%.2f", metros);

    return 0;
}