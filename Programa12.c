#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
 
 int num;
 scanf("%d", &num);
 switch(num){
     case 0:
        printf("0\n");
        break;
    case 1:
        printf("1\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
        break;
    case 5:
        printf("5\n");
        break;
    default:
        printf("Numero Invalido\n");
        break;
 }
    printf("fim\n");
    
    
    return 0;
}