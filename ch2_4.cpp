#include<iostream>

int main() {
  int user_age_years, user_age_months;
  std::cout << "How old are you? ";
  std::cin >> user_age_years;
  user_age_months = user_age_years * 12;
  std::cout << "You are " << user_age_months << " months old.";
}
