#pragma once

#include <chrono>

namespace monitor {
class Utils {
 public:
  static double SteadyTimeSecond(
      const std::chrono::steady_clock::time_point &t1,
      const std::chrono::steady_clock::time_point &t2) {
    std::chrono::duration<double> time_second = t1 - t2;
    return time_second.count();
  }
};
}  // namespace monitor