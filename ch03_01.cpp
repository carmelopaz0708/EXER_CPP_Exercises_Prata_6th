//ch03_01

#include <iostream>

void inches_to_feet_inches_conv_func(int input_inches);

int main() {
  unsigned int input_height_inches;
  std::cout << "Enter height in inches: ____\b\b\b\b";
  std::cin >> input_height_inches;
  inches_to_feet_inches_conv_func(input_height_inches);
}

void inches_to_feet_inches_conv_func(int input_inches) {
  unsigned int output_feet, output_inches;
  const int conv_factor = 12;
  output_feet = input_inches / conv_factor;
  output_inches = input_inches - (conv_factor * output_feet);
  std::cout << "Height: " << output_feet << "\'" << output_inches << "\"\n";
}
