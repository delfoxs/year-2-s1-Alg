#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    memo.clear(); // Clear memoization map for each call
    return numTrucksMemoized(numCrates, loadSize);
}

int EfficientTruckloads::numTrucksMemoized(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    std::pair<int, int> key = {numCrates, loadSize};
    if (memo.find(key) != memo.end()) return memo[key];

    int left = numCrates / 2;
    int right = numCrates - left;
    int result = numTrucksMemoized(left, loadSize) + numTrucksMemoized(right, loadSize);
    memo[key] = result;
    return result;
}
