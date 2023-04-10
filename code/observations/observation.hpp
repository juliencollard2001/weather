#include <bits/types/time_t.h>
#include <vector>

class observation
{
    time_t t;
    std::vector<double> data;

public:
    observation(time_t _t);
    time_t get_t();
    double get_data(int i);
    std::vector<double> get_all_data();
    static double dist_temp(observation a, observation b);
    static double dist_data(observation a, observation b);
};