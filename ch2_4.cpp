#include<iostream>

int main() {
  int user_age_years, user_age_months;
  std::cout << "Enter your age: ";
  std::cin >> user_age_years;
  user_age_months = user_age_years * 12;
  std::cout << "Your age in months is " << user_age_months;
}
