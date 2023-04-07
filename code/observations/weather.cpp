#include "weather.hpp"

#include <map>


weather::weather(time_t t, double pressure, double tend_pressure, int tend_code,
                int wind_direction, double wind_speed, double temperature,
                double dew_point, double humidity) : observation(t) {
            this->pressure = pressure;
            this->tend_pressure = tend_pressure;
            this->tend_code = tend_code;
            this->wind_direction = wind_direction;
            this->wind_speed = wind_speed;
            this->temperature = temperature;
            this->dew_point = dew_point;
            this->humidity = humidity;
        }


std::vector<std::vector<double>> weather::code = {{0,-1}, {1,-1}, {1,0}, {1,1}, {0,0}, {0,1}, {-1, 1}, {-1,0},{-1,-1}};

double weather::get_tend_first() {
    return weather::code[tend_code][0];
}

double weather::get_tend_second() {
    return weather::code[tend_code][1];
}