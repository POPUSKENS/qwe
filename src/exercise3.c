#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {
    double numbers[SIZE];
    double temp[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <K>\n", argv[0]);
        return 1;
    }
    
    int K = atoi(argv[1]);
    
    if (K > 0) {

        for (int i = 0; i < SIZE; i++) {
            temp[(i + K) % SIZE] = numbers[i];
        }
    } else if (K < 0) {
        K = -K;  
        for (int i = 0; i < SIZE; i++) {
            temp[i] = numbers[(i + K) % SIZE];
        }
    } else {
      
        for (int i = 0; i < SIZE; i++) {
            temp[i] = numbers[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%g", temp[i]);
        if (i < SIZE - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}