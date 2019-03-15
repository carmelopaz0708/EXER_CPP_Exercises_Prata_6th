#include<iostream>

double celsius_to_fahrenheit(double);
void fahrenheit_display(double, double);

int main() {
  double input_celsius, output_fahrenheit;
  std::cout << "Please enter a Celsius value: ";
  std:: cin >> input_celsius;
  output_fahrenheit = celsius_to_fahrenheit(input_celsius);
  fahrenheit_display(input_celsius, output_fahrenheit);
}

double celsius_to_fahrenheit(double input_celsius) {
  // Converts the input degrees celsius variable to degrees fahrenheit
  double output_fahrenheit;
  output_fahrenheit = 1.8 * input_celsius + 32.0;
  return output_fahrenheit;
}

void fahrenheit_display(double console_celsius,double console_fahrenheit) {
  // Displays both degrees celsius and degrees fahrenheit
  std::cout << console_celsius << " degrees Celsius is " << console_fahrenheit << " degrees Fahrenheit";
}
