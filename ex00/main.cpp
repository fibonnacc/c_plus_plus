#include "Bureaucrat.hpp"

int main () {
  try {
    Bureaucrat thing1("Hicham", 150);
    thing1.decrement();
    std::cout << thing1.getName() << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  try {
    Bureaucrat thing2("Hicham", 1);
    thing2.increment();
    std::cout << thing2.getName() << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
