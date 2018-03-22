#ifndef LAB1_SQUARE_VOLUME_FUNCTIONS_H
#define LAB1_SQUARE_VOLUME_FUNCTIONS_H

#include <math.h>

double SquareCilindr(double radius, double high);
double VolumeCilindr(double radius, double high);

/*
  radius1 - радиус самого тороида,
  radius2 - радиус внутреннего сечения тороида
*/

double SquareToroid(double radius1, double radius2);
double VolumeToroid(double radius1, double radius2);

#endif //LAB1_SQUARE_VOLUME_FUNCTIONS_H
