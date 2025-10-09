#include <stdio.h>

int main() {
    long long sum_cents = 0;
    
  
    for (int i = 0; i < 10; i++) {
        double number;
        scanf("%lf", &number);
  
        long long cents;
        if (number >= 0) {
            cents = (long long)(number * 100 + 0.5);
        } else {
            cents = (long long)(number * 100 - 0.5);
        }
        sum_cents += cents;
    }
 
    long long average_cents = sum_cents / 10;
    

    long long remainder = sum_cents % 10;
    if (remainder > 0 && remainder >= 5) average_cents++;
    if (remainder < 0 && remainder <= -5) average_cents--;

    double average = average_cents / 100.0;
    printf("%.2f\n", average);
    
    return 0;
}