#pragma once

#include <string>
#include <vector>

#define ARGS_VECTOR std::vector<std::string>

class Arguments {
private:
  Arguments() = delete;
  Arguments(Arguments &&) = delete;
  Arguments(const Arguments &) = delete;
  Arguments &operator=(Arguments &&) = delete;
  Arguments &operator=(const Arguments &) = delete;
  ~Arguments() = delete;

public:
  static ARGS_VECTOR GetArgsVector(int argc, char *argv[]);
  static int ContainsHelp(ARGS_VECTOR args);
  static int ContainsArg(ARGS_VECTOR args, std::string arg);
  static std::string GetRunPath(ARGS_VECTOR args);
  static std::string GetArg(ARGS_VECTOR args, int index);
};
