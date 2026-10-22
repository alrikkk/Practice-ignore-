#include <stdio.h>

// ---------- Helper Function 1 ----------
float celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

// ---------- Helper Function 2 ----------
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

// ---------- Helper Function 3 ----------
float celsiusToKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    return kelvin;
}

// ---------- Main Program ----------
int main() {
    int choice;
    float c, f, result;

    // Display the conversion menu
    printf("1. Celsius -> Fahrenheit\n");
    printf("2. Fahrenheit -> Celsius\n");
    printf("3. Celsius -> Kelvin\n");
    
    // Read the user's choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case for temperature conversions
    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            result = celsiusToFahrenheit(c);
            printf("Temperature in Fahrenheit = %.2f\n", result);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            result = fahrenheitToCelsius(f);
            printf("Temperature in Celsius = %.2f\n", result);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            result = celsiusToKelvin(c);
            printf("Temperature in Kelvin = %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
