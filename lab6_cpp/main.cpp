#include "Complex_t.h"

int main() {
    Complex_t complex1, complex2, complex3(1.2, 4);

    cin >> complex1;
    cin >> complex2;
    cout << "\nThird complex number << " << complex3 << endl;

    Complex_t complex(complex2);
    cout << "Copy constructor << " << complex << endl;

    cout << "Division complex2 by complex3 => " << (complex2/complex3) << endl;
    cout << "Multiply complex3 by complex1 => " << (complex3*complex1) << endl;
    cout << "Operator+= => " << (complex3+=complex1) << endl;
    cout << "Operator-= => " << (complex2-=complex1) << endl;
    cout << "Operator*= => " << (complex1*=complex3) << endl;
    cout << "Operator/= => " << (complex2/=complex3) << endl;
    cout << "Operator= => " << (complex1=complex2) << endl;
    cout << "Operator== => " << (complex1==complex2) << endl;

    return 0;
}
