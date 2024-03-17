#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
     if (numCrates <= loadSize) {
            return 1;
        } else {
            int trucksNeeded = numTrucks(numCrates / 2, loadSize);
            return trucksNeeded * 2;
        }
}
