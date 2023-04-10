#include <algorithm>
#include <vector>

#include "../observations/observation.hpp"

class set
{
private:
  std::vector<observation> *data;

public:
  set();
  set(std::vector<observation> data);
  void sort_by_time();
  set filter_by_time(time_t a, time_t b);
  ~set();
};