#include "Functions.h"

double SquareCilindr(double Rc1, double Hc1){
    return M_PI * pow(Rc1, 2) + 2 * M_PI * Rc1 * Hc1;
}

double SquareToroid(double Rt1, double rt1){
    return 4 * M_PI * Rt1 * rt1;
}

double VolumeCilindr(double Rc2, double Hc2){
    return M_PI * pow(Rc2, 2) * Hc2;
}

double VolumeToroid(double Rt2, double rt2){
    return 2 * pow(M_PI, 2) * pow(rt2, 2) * Rt2;
}
