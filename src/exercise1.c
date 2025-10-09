#include <stdio.h>
int main(int argc, char** argv) {
    double numbers[10];
    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    float average = sum / 10.0;
    average = double average
    printf("%.2f\n", average);
    return 0;
}