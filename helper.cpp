#include "helper.h"
#include "mutex"
#include "string"

#include <ctime>  
#include <cstdlib>

//create helper lock
std::mutex helperMutex;

Helper* Helper::helper = nullptr;

Helper::~Helper()
{
  if (helper)
  {
    delete helper;
    helper = NULL;
  }
}
//if c++ 15 only return helper is ok
Helper* Helper::instance()
{
  if (!helper)
  {
    std::lock_guard<std::mutex> lockGuard(helperMutex);
    if (!helper)
    {
      helper = new Helper;
    }
  }
  return helper; 
}

double random(double start, double end)
{
  return start + (end - start)*rand() / (RAND_MAX + 1.0);
}
int Helper::getRendomNum(const int start, const int end) const
{
  unsigned seed(time(NULL));

  double random(double, double);
  srand(seed);

  return random(start, end);
}