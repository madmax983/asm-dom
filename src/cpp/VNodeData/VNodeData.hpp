#ifndef VNodeData_hpp
#define VNodeData_hpp

#include "../VNode/VNode.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Val/Val.hpp"
// #include <functional>
#include <vector>
#include <string.h>

struct VNodeData {
  val props;
  val attrs;
  val className;
  val style;
  val dataset;
  val on;
  val hero;
  val attachData;
  struct Hooks* hook;
  const char* key;
  const char* ns;
  // std::function<struct VNode*(void)> fn;
  std::vector<val> args;
};

#endif