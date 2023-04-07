#include "consumption.hpp"


consumption::consumption(time_t t, double global_active_power, double global_reactive_power,
                    double voltage, double global_intensity, double sub_metering_1,
                    double sub_metering_2, double sub_metering_3) : observation(t) {
            this->global_active_power = global_active_power;
            this->global_reactive_power = global_reactive_power;
            this->voltage = voltage;
            this->global_intensity = global_intensity;
            this->sub_metering_1 = sub_metering_1;
            this->sub_metering_2 = sub_metering_2;
            this->sub_metering_3 = sub_metering_3;
        }