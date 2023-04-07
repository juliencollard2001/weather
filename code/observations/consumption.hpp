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
        consumption(time_t _t, double _global_active_power, double _global_reactive_power, double _voltage, double _global_intensity, double _sub_metering_1, double _sub_metering_2, double _sub_metering_3) : observation(_t) {
            global_active_power = _global_active_power;
            global_reactive_power = _global_reactive_power;
            voltage = _voltage;
            global_intensity = _global_intensity;
            sub_metering_1 =_sub_metering_1;
            sub_metering_2 = _sub_metering_2;
            sub_metering_3 = _sub_metering_3;
        }
};
