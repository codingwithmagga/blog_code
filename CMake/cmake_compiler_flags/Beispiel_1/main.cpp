#include <iostream>

int main() {

#ifdef PRINT
  std::cout << "PRINT is defined." << std::endl;
#else
  std::cout << "PRINT not defined." << std::endl;
#endif

  std::cout << "NUMBER: " << NUMBER << std::endl;

  return 0;
}
