#pragma once
#include <ctime>
#include <string>

enum timerState
{
  STOPPED,
  RUNNING
};

class Timer
{
private:
  timerState state{STOPPED};
  time_t startTime{};
  time_t endTime{};

public:
  void start();
  void stop();
  double elapsed();
};
