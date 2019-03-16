#include <iostream>

double lightYear_au_conv(double);
void console_display(double, double);

int main() {
  double input_lightYear, output_au;
  std::cout << "Enter the number of light years: ";
  std::cin >> input_lightYear;
  output_au = lightYear_au_conv(input_lightYear);
  console_display(input_lightYear, output_au);
}

double lightYear_au_conv(double val_lightYear) {
  double val_au;
  val_au = val_lightYear * 63240;
  return val_au;
}

void console_display(double display_lightYear, double display_au) {
  std::cout << display_lightYear << " light year = " << display_au << " astronomical units" << std::endl;
}
