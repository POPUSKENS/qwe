#include <stdio.h>

int main() {
    double number;
    long long sum_cents = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &number);

        sum_cents += (long long)(number * 100 + (number >= 0 ? 0.5 : -0.5));
    }
 
    long long average_cents = sum_cents / 10;
    if (sum_cents % 10 >= 5) average_cents++;  /
    else if (sum_cents % 10 <= -5) average_cents--;  
    

    double average = average_cents / 100.0;
    
    printf("%.2f\n", average);
    
    return 0;
}