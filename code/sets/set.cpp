#include "set.hpp"

set::set() { data = new std::vector<observation>(); }
set::set(std::vector<observation> _data) { *data = _data; }
void set::sort_by_time() {
  std::sort(data->begin(), data->end(),
            [](observation a, observation b) -> bool {
              return a.get_t() < b.get_t();
            });
}
set set::filter_by_time(time_t a, time_t b) {
  sort_by_time();
  auto comp = [](observation a, time_t t) -> bool { return a.get_t() < t; };
  auto start = std::lower_bound(data->begin(), data->end(), a, comp);
  auto end = std::upper_bound(data->begin(), data->end(), a, comp);
  std::vector<observation> filt = std::vector<observation>(start, end);
  return set(filt);
}

set::~set() { delete data; }