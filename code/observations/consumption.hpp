#include "observation.hpp"
#include <vector>

class consumption : observation
{
private:
    // [0] global_active_power, [1] global_reactive_power, [3] voltage, [4] global_intensity,
    // [5] sub_metering_1, [6] sub_metering_2, [7] sub_metering_3
    std::vector<double> data;

public:
    consumption(time_t t, double global_active_power, double global_reactive_power,
                double voltage, double global_intensity, double sub_metering_1,
                double sub_metering_2, double sub_metering_3);
};
