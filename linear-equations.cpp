#include "includes.h"

/* simple yet efficient way to do a linear equation. */

class calculate {
  public:
  int32_t entry1_1;
  int32_t entry1_2;

  int32_t entry2_1;
  int32_t entry2_2;

  calculate(int32_t entry1_1, int32_t entry1_2, int32_t entry2_1, int32_t entry2_2) {
    this->entry1_1=entry1_1;
    this->entry1_2=entry1_2;

    this->entry2_1=entry2_1;
    this->entry2_2=entry2_2;
  };

  void calc() {
    /*
    basic logic:
          y1 - y2
    a -> ---------
          x1 - x2
    
    b -> y1 - ax1

    the 1's referred are not val * 1 instead referring to which eg:
    -> x1 = e1_1
    */

    double a = static_cast<double>(entry1_2 - entry2_2) / static_cast<double>(entry1_1 - entry2_1);
    double b = 1*entry2_2 - 1*a*entry2_1;

    std::string formula = "y = x . " + std::to_string(a) + " + " + std::to_string(b) + "";

    std::cout << formula << std::endl;
  };
};

int main(void) {
  /* 
  (2, 4) (4,8)
  = calculate.entry(2,4,4,8)
    entry.calc
  */
  calculate entry(2, 4, 4, 8);
  entry.calc();

  return 0;
}
