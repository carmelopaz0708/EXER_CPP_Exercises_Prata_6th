#include<iostream>

int main() {
  int dist_furlong, dist_yard;
  std::cout << "Distance(furlongs): ";
  std::cin >> dist_furlong;
  
  dist_yard = dist_furlong * 220;
  std::cout << dist_furlong << " furlong = " << dist_yard << " yards";
}
