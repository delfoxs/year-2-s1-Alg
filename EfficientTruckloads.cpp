#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    
    if (memo.find(numCrates) != memo.end()) {
        return memo[numCrates];
    }
    
    int remainingCrates = numCrates - loadSize;
    int trucksNeeded = numTrucks(remainingCrates, loadSize);
    int result = trucksNeeded + 1;
    
    memo[numCrates] = result;
    
    return result;
}
