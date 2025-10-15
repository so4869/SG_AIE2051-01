#include <iostream>

using namespace std;

float CelsiusToFahrenheit(float);
float FahrenheitToCelsius(float);

int main() {
    double c = 0, f = 0;

    cout << "Enter the Celsius temperature" << endl;
    cin >> c;
    cout << "Enter the ​Fahrenheit temperature" << endl;
    cin >> f;

    double cf = CelsiusToFahrenheit(c);
    double fc = FahrenheitToCelsius(f);

    cout << c << " degrees Celsius is equivalent to " << cf << " degrees Fahrenheit" << endl;
    cout << f << " degrees Fahrenheit is equivalent to " << fc << " degrees Celsius" << endl;

    return 0;
}

float CelsiusToFahrenheit(float c) {
    return c * 9.0 / 5 + 32;
}

float FahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}