#include <bits/types/time_t.h>

class observation {
    private:
        time_t t;
    public:
        observation(time_t _t) ;
        time_t get_t() ;

        static double dist(observation a, observation b);
};