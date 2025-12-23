#include "Bureaucrat.hpp"

int main () {
  try {
    Bureaucrat thing1("Hicham", 10);
    std::cout << thing1.getName() << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  try {
    Bureaucrat thing2("Hicham", 0);
    std::cout << thing2.getName() << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
