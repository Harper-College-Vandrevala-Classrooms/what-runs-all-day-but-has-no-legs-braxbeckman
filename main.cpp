#include "timer.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
  Timer t;
  t.start();
  sleep(5);
  t.stop();
  std::cout << t.elapsed() << std::endl;
}
