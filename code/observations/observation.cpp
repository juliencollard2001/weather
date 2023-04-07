#include "observation.hpp"


observation::observation(time_t _t) { t = _t; }

time_t observation::get_t() { return t; }

double observation::dist(observation a, observation b) {
    return 0.0;
}