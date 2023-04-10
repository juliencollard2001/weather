#include "observation.hpp"

#include <vector>

class weather : observation
{
private:
    // [0] pressure, [1] tend_pressure, [2] tend_baro_first, [3] tend_baro_second, [4] wind_direction
    // [5] wind_speed, [6] temperature, [7] dew_point, [8] humidity
    std::vector<double> data;
    // tend_code
    int tend_code;
    // convertisseur tend_cod -> (tend_baro_first, tend_baro_second) pour
    // avoir deux valeurs au lieux d'un code
    static std::vector<std::vector<double>> code;

public:
    weather(time_t t, double pressure, double tend_pressure, int tend_code,
            int wind_direction, double wind_speed, double temperature,
            double dew_point, double humidity);
    int get_code();
};
