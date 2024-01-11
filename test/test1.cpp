#include "Arguments/Arguments.hpp"
#include <iostream>

#define print(value) std::cout << value << '\n'

int main(int argc, char *argv[]) {
  ARGS_VECTOR test = Arguments::GetArgsVector(argc, argv);

  for (std::string arg : test) {
    std::cout << arg << '\n';
  }

  print(Arguments::ContainsArg(test, "hi"));

  print(Arguments::ContainsHelp(test));

  print(Arguments::GetRunPath(test));

  print(Arguments::GetArg(test, 1));

  return 0;
}
