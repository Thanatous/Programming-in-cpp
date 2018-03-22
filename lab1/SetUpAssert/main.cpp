#include <iostream>
#include <cassert>
#include <math.h>

using namespace std;

class Square_Volume{
    public:

    double SquareCilindr(double Rc1, double Hc1){
        return M_PI * Rc1 * (Rc1 + 2 * Hc1);
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

    string TestSquareCilindr(double radius1, double high1){
        assert(radius1 > 0);
        assert(high1 > 0);
    }

    string TestVolumeCilindr(double radius2, double high2){
        assert(radius2 > 0);
        assert(high2 > 0);
    }

    string TestSquareToroid(double radius_tor_1, double radius_tor_11){
        assert(radius_tor_1 > 0);
        assert(radius_tor_11 > 0);
    }

    string TestVolumeToroid(double radius_tor_2, double radius_tor_22){
        assert(radius_tor_2 > 0);
        assert(radius_tor_22 > 0);
    }
};

int main() {

    Square_Volume square_volume;

    double Radc1, Highc1, Radc2, Highc2;
    double Radt1, radt1, Radt2, radt2;

    cout << "Get some parametrs: \n";

    cout << "\tCilindr_radius and Cilindr_high for square => ";
    cin >> Radc1 >> Highc1;
    square_volume.TestSquareCilindr(Radc1, Highc1);
    cout << "\n\v\tSquare of cilindr => " << square_volume.SquareCilindr(Radc1, Highc1);


    cout << "\tCilindr_radius and Cilindr_high for volume => ";
    cin >> Radc2 >> Highc2;
    square_volume.TestVolumeCilindr(Radc2, Highc2);
    cout << "\n\v\tVolume of cilindr => " << square_volume.VolumeCilindr(Radc2, Highc2);


    cout << "\tToroid_radius_one and Toroid_radius_two for square => ";
    cin >> Radt1 >> radt1;
    square_volume.TestSquareToroid(Radt1, radt1);
    cout << "\n\v\tSquare of toroid => " << square_volume.SquareToroid(Radt1, radt1);


    cout << "\tToroid_radius_one and Toroid_radius_two for volume => ";
    cin >> Radt2 >> radt2;
    square_volume.TestVolumeToroid(Radt2, radt2);
    cout << "\n\v\tVolume of toroid => " << square_volume.VolumeToroid(Radt2, radt2);


    return 0;
}