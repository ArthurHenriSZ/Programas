#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {

int num1;
int num2;
float num3;
double num4;
long int num5;

scanf ("%i", &num1);
scanf ("%i", &num2);
scanf ("%f", &num3);
scanf ("%lf", &num4);
scanf ("%i", &num5);
printf("%.2f", num4);
printf(" - ");
printf("%.2f", num3);
printf(" - ");
printf("%i", num1);
printf(" - ");
printf("%i", num2);
printf(" - ");
printf("%i", num5);

    return 0;
}