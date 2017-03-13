#pragma once
#include "commondef.h"

//single instance
class Helper {

public:
  
  ~Helper();

public:
  static Helper* instance();
  int getRendomNum(const int start, const int end) const;

private:
  static Helper* helper;
  Helper() { ; }
};