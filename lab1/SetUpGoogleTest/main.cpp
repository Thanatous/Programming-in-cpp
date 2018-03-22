#include <iostream>
#include "Functions.h"

using namespace std;

int main() {

    double Rc1, Hc1, Rc2, Hc2;
    double Rt1, rt1, Rt2, rt2;

    cout << "Get some parametrs: \n";

    cout << "\tCilindr_radius and Cilindr_high for square => ";
    cin >> Rc1 >> Hc1;
    cout << "\v\tSquare of cilindr => " << SquareCilindr(Rc1, Hc1);

    cout << "\tCilindr_radius and Cilindr_high for volume => ";
    cin >> Rc2 >> Hc2;
    cout << "\v\tVolume of cilindr => " << VolumeCilindr(Rc2, Hc2);

    cout << "\tToroid_radius_one and Toroid_radius_two for square => ";
    cin >> Rt1 >> rt1;
    cout << "\v\tSquare of toroid => " << SquareToroid(Rt1, rt1);

    cout << "\tToroid_radius_one and Toroid_radius_two for volume => ";
    cin >> Rt2 >> rt2;
    cout << "\v\tVolume of toroid => " << VolumeToroid(Rt2, rt2);

    return 0;
}
