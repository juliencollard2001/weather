#include "observation.hpp"
#include <vector>
#include <stdlib.h>

observation::observation(time_t _t)
{
    t = _t;
    data = std::vector<double>();
}

time_t observation::get_t()
{
    return t;
}

double observation::get_data(int i)
{
    return data[i];
}

std::vector<double> observation::get_all_data()
{
    return data;
}

observation::dist_temp(observation a, observation b)
{
    return abs(a.get_t() - b.get_t());
}

observation::dist_data(observation a, observation b)
{
    double sum = 0;
    for (int i = 0; i < a.get_all_data().size(); i++)
    {
        sum += pow(a.get_data(i) - b.get_data(i), 2);
    }
    return pow(sum, 0.5);
}