#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {
    double numbers[SIZE];
    double result[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }

    double X = atof(argv[1]);
    int K = atoi(argv[2]);

    for (int i = 0; i < SIZE; i++) {
        if (i < K) {
            result[i] = numbers[i];     
        } else if (i == K) {
            result[i] = X;              
        } else {
            result[i] = numbers[i - 1];  
        }
    }
    
 
    for (int i = 0; i < SIZE; i++) {
        printf("%g", result[i]);
        if (i < SIZE - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}