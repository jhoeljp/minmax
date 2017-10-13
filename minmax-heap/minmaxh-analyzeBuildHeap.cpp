#include <iostream>
#include <fstream>

#include "../util/timer.hpp"
#include "minmax-heap.hpp"
#include "../util/util.hpp"

using namespace std;

int  main() {
  Timer* t = new Timer();

  t->start();
  IMPLEMENT_ME();
  std::cout << "operation took: ";
  t->printTime(t->stop());

  delete t;
  return 0;
}
