#include <iostream>
#include <cmath>

int main() {
  double t, g, e;
  e = 2.71828182845904;
  t = 0.2;
  while (t < 1) {
    g = 4.57 * (1 - std::pow(e, -0.73 * t));
    std::cout << "t=" << t << "   g=" << g << std::endl;
    t=t + 0.2;
  }
  while (t < 6) {
    g = 4.57 * (1 - std::pow(e, -0.73 * t));
    std::cout << "t=" << t << "     g=" << g << std::endl;
    t=t + 1;
  }
}