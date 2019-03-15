#include<iostream>

void statement1_funct();
void statement2_funct();

int main() {
  statement1_funct();
  statement1_funct();
  statement2_funct();
  statement2_funct();
}

void statement1_funct() {
  std::cout << "Three blind mice\n";
}

void statement2_funct() {
  std::cout << "See how they run\n";
}
