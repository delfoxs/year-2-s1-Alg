
#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    } else {
        int trucksNeeded = numTrucks((numCrates + loadSize - 1) / 2, loadSize);
        return 2 * trucksNeeded;
    }
}
