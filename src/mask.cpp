//
// Created by TJ on 10/30/2023.
//

#include "mask.h"
using namespace std;


vector<bool> build_mset_mask(
        dimension resolution,
        unsigned int escape_depth
    ){
    unsigned int x_resolution = resolution >> 16;
    unsigned int y_resolution = resolution & 0x0F;
    unsigned int half_x_resolution = x_resolution >> 1;
    unsigned int half_y_resolution = y_resolution >> 1;

    unsigned long size = x_resolution*y_resolution;
}