#include "observation.hpp"

class consumption : observation {
    private:
        double global_active_power;
        double global_reactive_power;
        double voltage;
        double global_intensity;
        double sub_metering_1;
        double sub_metering_2;
        double sub_metering_3;
    public:
        consumption(time_t t, double global_active_power, double global_reactive_power,
                    double voltage, double global_intensity, double sub_metering_1,
                    double sub_metering_2, double sub_metering_3) ;
};
