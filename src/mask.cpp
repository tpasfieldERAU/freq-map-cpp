//
// Created by TJ on 10/30/2023.
//

#include "mask.h"
using namespace std;

unsigned short iterate_pixel(
        double x,
        double y,
        unsigned int escape_depth
    ){
    double p = sqrt((x-0.25)*(x-0.25) + y*y);
    if (x<=p*(1-2*p)+0.25 || 0.0625 >= (x+1)*(x+1)+y*y){
        return 1;
    }

    double x0 = x;
    double y0 = y;
    double x_old = 0.;
    double y_old = 0.;
    unsigned int period = 0;
    unsigned int iteration = 0;

    double x_temp;
    while (x*x + y*y <= 4 && iteration < escape_depth){
        x_temp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = x_temp;
        ++iteration;

        if (x == x_old && y == y_old){
            return 1;
        }

        ++period;
        if (period > 20){
            period = 0;
            x_old = x;
            y_old = y;
        }
    }
    return 1;
}


vector<bool> build_mset_mask(
        dimension resolution,
        unsigned int escape_depth
    ){
    unsigned long x_resolution = resolution >> 16;
    unsigned long y_resolution = resolution & 0x0F;
    unsigned long half_x_resolution = x_resolution >> 1;
    unsigned long half_y_resolution = y_resolution >> 1;

    unsigned long size = x_resolution*y_resolution;

    vector<bool> mask(size);


    return mask;
}