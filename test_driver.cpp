#include <iostream>

void sayHello(std::ostream &os);

int main(int argc, char *argv[]) {
  sayHello(std::cout);
  return 0;
}
