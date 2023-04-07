#include <vector>
#include "../observations/observation.hpp"

class set {
    private:
        std::vector<observation> data;
    public:
        set() {
            data = std::vector<observation>();
        }
};