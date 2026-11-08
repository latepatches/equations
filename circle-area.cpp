#include "includes.h"

class circle{
  /*
  
  formula -> a = pi . r . r
  
  */

  public:
  int32_t radius;

  circle(double radius) {
    this->radius=radius;
  };

  void area() {
    double out = calculate_area();
    std::cout << "Calculation (assuming pi = 3) : " << out << std::endl;
  }

  private:
  int32_t pi = 3;
  
  double calculate_area() {
    auto e1 = radius * radius;
    auto e2 = e1 * pi;

    return e2;
  }
};

int main(void) {
  /*replace the 5 after entry with ur radius.*/
  circle entry(5);
  entry.area()

  return 0;
}
