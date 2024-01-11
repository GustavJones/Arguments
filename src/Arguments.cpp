#include "Arguments/Arguments.hpp"
#include <string>

ARGS_VECTOR Arguments::GetArgsVector(int argc, char *argv[]) {
  ARGS_VECTOR output;

  for (int i = 0; i < argc; i++) {
    output.push_back(argv[i]);
  }

  return output;
}

int Arguments::ContainsArg(ARGS_VECTOR args, std::string arg) {
  int i = 0;

  while (i < args.size()) {
    if (args[i] == arg) {
      return i;
    }

    i++;
  }

  return -1;
}

int Arguments::ContainsHelp(ARGS_VECTOR args) {
  int result = ContainsArg(args, "help");

  if (result != -1) {
    return result;
  } else {
    result = ContainsArg(args, "--help");
  }

  return result;
}

std::string Arguments::GetRunPath(ARGS_VECTOR args) {
  return Arguments::GetArg(args, 0);
}

std::string Arguments::GetArg(ARGS_VECTOR args, int index) {
  return args[index];
}
