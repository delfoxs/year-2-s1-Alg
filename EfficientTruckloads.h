#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <unordered_map>

class EfficientTruckloads {
public:
    int numTrucks(int numCrates, int loadSize);
private:
    std::unordered_map<std::pair<int, int>, int, PairHash> memo;
    struct PairHash {
        template <class T1, class T2>
        std::size_t operator() (const std::pair<T1, T2>& pair) const {
            return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
        }
    };
    int numTrucksMemoized(int numCrates, int loadSize);
};

#endif
