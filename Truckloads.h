#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

class Truckloads {
public:
    int numTrucks(int numCrates, int loadSize);
};

class Reverser {
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
private:
    int reverseDigitHelper(int value, int reversed);
    std::string reverseStringHelper(std::string characters, size_t index);
};

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
