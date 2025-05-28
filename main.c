#include <stdio.h>

float farenheit_to_celsius(float f) {
    float c;
    c = (((f - 32) * 5) / 9);
    return c;
}



// This is where you add the two functions

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}