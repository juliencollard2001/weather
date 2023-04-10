#include "consumption.hpp"

consumption::consumption(time_t t, double global_active_power, double global_reactive_power,
                         double voltage, double global_intensity, double sub_metering_1,
                         double sub_metering_2, double sub_metering_3) : observation(t)
{

    this->data = std::vector<double>({global_active_power, global_reactive_power, voltage, global_intensity, sub_metering_1, sub_metering_2, sub_metering_3});
}