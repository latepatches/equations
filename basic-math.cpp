#include "includes.h"

class equations{
  public:
  double v1;
  double v2;

  equations(double v1, double v2) {
    this->v1 = v1;
    this->v2 = v2;
  };

  double add() {
    return addition();
  };

  double divide() {
    return division();
  };

  double multiply() {
    return multiplication();
  };

  double subtract() {
    return subtraction();
  };

  double modulo() {
    return remainder();
  };

  double power() {
    double result = 1;

    for (int i = 0; i < v2; i++) {
      result *= v1;
    };

    return result;
  };

  double squareRoot() {
    if (v1 < 0) return 0;

    double result = v1;
    double temp = 0;

    while (result != temp) {
      temp = result;
      result = (v1 / result + result) / 2;
    };

    return result;
  };

  double absolute() {
    return v1 < 0 ? -v1 : v1;
  };

  double percentage() {
    if (v2 == 0) return 0;

    return (v1 / v2) * 100;
  };

  private:

  double addition() {
    return v1 + v2;
  };

  double division() {
    if (v2 == 0) return 0;

    return v1 / v2;
  };

  double multiplication() {
    return v1 * v2;
  };

  double subtraction() {
    return v1 - v2;
  };

  double remainder() {
    if (v2 == 0) return 0;

    int64_t a = static_cast<int64_t>(v1);
    int64_t b = static_cast<int64_t>(v2);

    return a % b;
  };
};

int main(void) {
  equations eq(10, 5);

  std::cout << eq.add() << std::endl;
  std::cout << eq.divide() << std::endl;
  std::cout << eq.multiply() << std::endl;
  std::cout << eq.subtract() << std::endl;
  std::cout << eq.modulo() << std::endl;
  std::cout << eq.power() << std::endl;
  std::cout << eq.squareRoot() << std::endl;
  std::cout << eq.absolute() << std::endl;
  std::cout << eq.percentage() << std::endl;

  return 0;
}
