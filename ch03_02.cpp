#include <iostream>

int input_height_feet_func();
int input_height_inches_func();
float input_weight_pounds_func();
void display_input(unsigned feet, unsigned inches, float pound);
float feetInches_to_meter_conv_func(unsigned feet, unsigned inches);
float pound_to_kilogram_conv_func(float pound);
void get_BMI_func(float kilogram, float meter);

int main() {
  unsigned height_ft, height_in;
  float weight_lbs, height_m, weight_kg;
  height_ft = input_height_feet_func();
  height_in = input_height_inches_func();
  weight_lbs = input_weight_pounds_func();
  display_input(height_ft, height_in, weight_lbs);
  height_m = feetInches_to_meter_conv_func(height_ft, height_in);
  weight_kg = pound_to_kilogram_conv_func(weight_lbs);
  get_BMI_func(weight_kg, height_m);
}

int input_height_feet_func() {
  unsigned input_height_ft;
  std::cout << "Enter your height in feet and inches\nfeet: ";
  std::cin >> input_height_ft;
  return input_height_ft;
}

int input_height_inches_func() {
  unsigned input_height_in;
  std::cout << "inches: ";
  std::cin >> input_height_in;
  return input_height_in;
}

float input_weight_pounds_func() {
  float input_weight_lbs;
  std::cout << "Enter your weight in pounds\nPounds: ";
  std::cin >> input_weight_lbs;
  return input_weight_lbs;
}

void display_input(unsigned feet, unsigned inches, float pound) {
  std::cout << "You entered " << feet << "\'" << inches << "\" & " << pound << "lbs.\n";
}

float feetInches_to_meter_conv_func(unsigned feet, unsigned inches) {
  unsigned inches_total;
  float meter;
  const int feetInches_to_inches_conv_factor = 12;
  const float inches_total_to_meter = 0.0254;
  inches_total = (feet * feetInches_to_inches_conv_factor) + inches;
  meter = inches_total * inches_total_to_meter;
  return meter;
}

float pound_to_kilogram_conv_func(float pound) {
  float kilogram;
  const float pound_to_kilogram_conv_factor = 2.20462;
  kilogram = pound / pound_to_kilogram_conv_factor;
  return kilogram;
}

void get_BMI_func(float kilogram, float meter) {
  std::cout << "\nYou are " << meter << "m tall and weight " << kilogram << "kg.\n";
  float bmi;
  bmi = kilogram / (meter * meter);
  std::cout << "Your BMI is " << bmi << "\n";
}
