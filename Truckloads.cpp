#include "TruckLoads.h"

int TruckLoads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    } else {
        int remainingCrates = numCrates - loadSize;
        int trucksNeeded = numTrucks(remainingCrates, loadSize);
        return trucksNeeded + 1;
    }
}
