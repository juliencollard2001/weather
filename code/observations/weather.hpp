#include "observation.hpp"

#include <vector>

class weather : observation {
    private:
        double pressure;
        double tend_pressure;
        int tend_code;
        int wind_direction;
        double wind_speed;
        double temperature;
        double dew_point;
        double humidity;
        static std::vector<std::vector<double>> code;

    public:
       weather(time_t t, double pressure, double tend_pressure, int tend_code,
                int wind_direction, double wind_speed, double temperature,
                double dew_point, double humidity);
        double get_tend_first() ;
        double get_tend_second() ;
};
