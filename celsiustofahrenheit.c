#include<stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("\n\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (1.8*celsius) + 32;
    
    printf("\n\n\nTemperature in Fahrenheit is: %f ", fahrenheit);
    return 0;
}
Output:
Enter temperature in Celsius: 37
Temperature in Fahrenheit is: 98.599998