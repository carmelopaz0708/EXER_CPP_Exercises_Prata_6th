#include <iostream>

void time_display(int, int);

int main() {
  int input_hours, input_minutes;
  std::cout << "Enter the number of hours: ";
  std::cin >> input_hours;
  std::cout << "Enter the number of minutes: ";
  std::cin >> input_minutes;
  time_display(input_hours, input_minutes);
}

void time_display(int hours_disp, int minutes_disp) {
  std::cout << "Time: " << hours_disp << ":" << minutes_disp << "\n";
}
