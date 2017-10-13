#include <iostream>


#include "../util/timer.hpp"
#include "max5-heap.hpp"
#include "../util/util.hpp"

int  main() {
  Timer* t = new Timer();

  t->start();
  IMPLEMENT_ME();
  std::cout << "operation took: ";
  t->printTime(t->stop());

  return 0;
}
