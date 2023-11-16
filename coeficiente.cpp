#include <iostream>
#include <cmath>
int main() {
 double A, B, C, discriminante, x1, x2;
 std::cout << "Introduce el coeficiente A: ";
 std::cin >> A;
 std::cout << "Introduce el coeficiente B: ";
 std::cin >> B;
 std::cout << "Introduce el coeficiente C: ";
 std::cin >> C;
 discriminante = B * B - 4 * A * C;
 x1 = (-B + std::sqrt(discriminante)) / (2 * A);
 x2 = (-B - std::sqrt(discriminante)) / (2 * A);
 std::cout << "Las soluciones son: " << x1 << " y " << x2 << std::endl;
 return 0;