#include "weather.hpp"
#include <math.h>
#include <map>

std::vector<std::vector<double>> weather::code = {{0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 0}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}};

weather::weather(time_t t, double pressure, double tend_pressure, int tend_code,
                 int wind_direction, double wind_speed, double temperature,
                 double dew_point, double humidity)
    : observation(t)
{
  this->data = std::vector<double>({pressure, tend_pressure, weather::code[tend_code][0], weather::code[tend_code][1], wind_direction, wind_speed, temperature, dew_point, humidity});
  this->tend_code = tend_code;
}

weather::get_code()
{
  return tend_code;
}