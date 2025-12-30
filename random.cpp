#include <iostream>
#include <ctime>
#include <cstdlib>

int main (int argc, char *argv[]) {

  srand(42);
  for (size_t i = 0; i < 5; i++) {
    int random = rand() % 100 + 1;
    if (random <= 50)
      std::cout << "Successfully! Robotomized" << std::endl;
    else
      std::cout << "Failed! Robotomized" << std::endl;
  }

  return 0;
}
