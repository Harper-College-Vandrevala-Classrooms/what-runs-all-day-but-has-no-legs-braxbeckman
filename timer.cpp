#include "timer.hpp"
#include <iostream>

void Timer::start()
{
  if (state == RUNNING)
    std::cout << "**You can't start a timer when one is already running!**\n";
  else
  {
    time(&startTime);
    state = RUNNING;
  }
}

void Timer::stop()
{
  if (state == STOPPED)
  {
    std::cout << "**You can't stop a timer that isn't running!**";
  }
  else
  {
    time(&endTime);
    state = STOPPED;
  }
}

double Timer::elapsed()
{
  return difftime(endTime, startTime);
}
