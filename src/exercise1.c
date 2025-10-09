#include <stdio.h>
int main(int argc, char** argv) {
    float numbers[10];
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    float average = sum / 10.0;
    
    printf("%.2f\n", average);
    return 0;
}