#ifndef LAB2_COMPLEX_COMPLEX_H
#define LAB2_COMPLEX_COMPLEX_H

#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double Re, Im;
public:
    Complex(): Re(0.0), Im(0.0){};
    Complex(double re, double im):Re(re), Im(im){};

    void print(ostream& os){
        if(Im < 0){
            os << Re << Im << "i" << endl;
        }else{
            os << Re << "+" << Im << "i" << endl;
        }
    }

    Complex add(Complex const& other){
        return Complex(Re+other.Re, Im+other.Im);
    }

    Complex sub(Complex const& other){
        return Complex(Re-other.Re, Im-other.Im);
    }

    Complex mul(int number){
        return Complex(Re*number, Im*number);
    }

    Complex div(int number){
        try {
            if(number == 0){
                throw domain_error("division zero!!!");
            }else{
                Re /= number;
                Im /= number;
            }
        }catch(const exception& e){
            cout << "!!!ERROR: " << e.what() << endl;
        }
        return Complex(Re, Im);
    }
};

#endif //LAB2_COMPLEX_COMPLEX_H
