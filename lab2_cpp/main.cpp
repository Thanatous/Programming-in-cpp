#include "Complex.h"

int main() {
    double Re1, Im1, Re2, Im2;
    int number, menu, complex;
    char answer;

    cout << "Hello, usver! This program can add, sub, mul and div two complex numbers!\n";
    cout << "At first get some parametrs for two complex numbers: \n";

    cout << "\tRe and Im for the first complex number => ";
    cin >> Re1 >> Im1;
    cout << "\tRe and Im for the second complex number => ";
    cin >> Re2 >> Im2;

    cout << "\t+++++++++++++++++++++++++++++++++" << endl;

    Complex complex1(Re1, Im1);
    cout << "\tFirst complex number => ";
    complex1.print(cout);
    Complex complex2(Re2, Im2);
    cout << "\tSecond complex number => ";
    complex2.print(cout);

    cout << "\t+++++++++++++++++++++++++++++++++" << endl;

    do{
        cout << "Now you can choose a mathematic operation from menu: "
                "\n\t1) add two complex numbers;"
                "\n\t2) sub two complex numbers;"
                "\n\t3) mul one of the complex number with int number;"
                "\n\t4) div one of the complex number with int number;"
                "\n\t>>> ";
        cin >> menu;

        switch (menu){
            case 1:
                cout << "Sum of two complex numbers is => ";
                complex1.add(complex2).print(cout);
                break;
            case 2:
                cout << "Sub of two complex numbers is => ";
                complex1.sub(complex2).print(cout);
                break;
            case 3:
                cout << "Get a number for multiply complex number: ";
                cin >> number;

                cout << "\tChoose a complex number (1 or 2) => ";
                cin >> complex;
                if(complex == 1){
                    cout << "Multiply is ";
                    complex1.mul(number).print(cout);
                }else{
                    cout << "Multiply is ";
                    complex2.mul(number).print(cout);
                }
                break;
            case 4:
                cout << "Get a number for multiply complex number: ";
                cin >> number;

                cout << "\tChoose a complex number (1 or 2) => ";
                cin >> complex;
                if(complex == 1){
                    cout << "Division is ";
                    complex1.div(number).print(cout);
                }else{
                    cout << "Division is ";
                    complex2.div(number).print(cout);
                }
                break;
            default:
                cerr << "You choose invalid variant!" << endl;
                exit(EXIT_FAILURE);
        }

    cout << "Would you like to continue? [y/n]" << endl;
    cin >> answer;
    }while(answer == 'y');
}
