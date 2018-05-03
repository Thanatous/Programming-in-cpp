#ifndef LAB6_COMPLEX_T_COMPLEX_T_H
#define LAB6_COMPLEX_T_COMPLEX_T_H

#include <iostream>
#include <cmath>
using namespace std;

class Complex_t {
private:
    double Re, Im;
public:
    Complex_t(): Re(0.0), Im(0.0){};
    Complex_t(double re, double im):Re(re), Im(im){};
    Complex_t(const Complex_t &a): Re(a.Re), Im(a.Im){};
    
    Complex_t operator*(const Complex_t &a)const{
        return Complex_t(Re*a.Re - Im*a.Im, Re*a.Re+Im*a.Im);
    }

    Complex_t operator/(const Complex_t &a)const{
        return Complex_t((Re*a.Re+Im*a.Im)/(a.Re*a.Re + a.Im*a.Im), (a.Re*Im-Re*a.Im)/(a.Re*a.Re+a.Im*a.Im));
    }

    Complex_t operator+=(const Complex_t &a){
        Re += a.Re;
        Im += a.Im;
        return Complex_t(Re, Im);
    }

    Complex_t operator-=(const Complex_t &a){
        Re -= a.Re;
        Im -= a.Im;
        return Complex_t(Re, Im);
    }

    Complex_t operator*=(const Complex_t &a){
        double tmp;
        tmp = Re*a.Re - Im*a.Im;
        Im = Im*a.Re + Re*a.Im;
        Re = tmp;
        return Complex_t(Re, Im);
    }

    Complex_t operator/=(const Complex_t &a){
        double tmp;
        tmp = (Re*a.Re + Im*a.Im)/(a.Re*a.Re + a.Im*a.Im);
        Im =  (-Re*a.Im + Im*a.Re)/(a.Re*a.Re + a.Im*a.Im);
        Re = tmp;
        return Complex_t(Re,Im);
    }

    Complex_t operator=(const Complex_t &a){
        Re = a.Re;
        Im = a.Im;
        return Complex_t(Re,Im);
    }

    bool operator==(const Complex_t &a){
        if(Re != a.Re && Im != a.Im){
            return false;
        }else{
            return true;
        }
    }

    template <class CharT, class Traits>
    friend basic_ostream<CharT, Traits>& operator<<(basic_ostream<CharT, Traits>& os, const Complex_t &a){
        if (a.Im < 0)
        {
            os << a.Re << a.Im << "i" << endl;
        }
        else
        {
            os << a.Re << "+" << a.Im << "i" << endl;
        }
        return os;
    }

    template <class CharT, class Traits>
    friend basic_istream<CharT, Traits>& operator>>(basic_istream<CharT, Traits>& is, Complex_t &a){
        cout << "Print Re- and Im-parts of complex number: ";
        is >> a.Re >> a.Im;
        return is;
    };
};

#endif //LAB6_COMPLEX_T_COMPLEX_T_H
