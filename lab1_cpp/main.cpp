#include <iostream>

using namespace std;

template <typename _T>
class PrintSizeOfFundamentalTypes{

    private:
        _T param;

    public:
        PrintSizeOfFundamentalTypes(_T param) : param(param) {};
        _T printSizeOf(){
            cout << "Type of variable '" << param << "' have size => " << sizeof(_T) << "\n\n";
        }
};

int main() {

    unsigned char a1;
    char a2;
    unsigned short a3;
    short a4;
    unsigned int a5;
    int a6;
    unsigned long a7;
    long a8;
    float a9;
    double a10;
    long double a11;

    cout << "Get some variables for unsigned char: " << endl;
    cin >> a1;
    PrintSizeOfFundamentalTypes<unsigned char> printSize1(a1);
    printSize1.printSizeOf();

    cout << "Get some variables for char: " << endl;
    cin >> a2;
    PrintSizeOfFundamentalTypes<char> printSize2(a2);
    printSize2.printSizeOf();

    cout << "Get some variables for unsigned short: " << endl;
    cin >> a3;
    PrintSizeOfFundamentalTypes<unsigned short> printSize3(a3);
    printSize3.printSizeOf();

    cout << "Get some variables for short: " << endl;
    cin >> a4;
    PrintSizeOfFundamentalTypes<short> printSize4(a4);
    printSize4.printSizeOf();

    cout << "Get some variables for unsigned int: " << endl;
    cin >> a5;
    PrintSizeOfFundamentalTypes<unsigned int> printSize5(a5);
    printSize5.printSizeOf();

    cout << "Get some variables for int: " << endl;
    cin >> a6;
    PrintSizeOfFundamentalTypes<int> printSize6(a6);
    printSize6.printSizeOf();

    cout << "Get some variables for unsigned long: " << endl;
    cin >> a7;
    PrintSizeOfFundamentalTypes<unsigned long> printSize7(a7);
    printSize7.printSizeOf();

    cout << "Get some variables for long: " << endl;
    cin >> a8;
    PrintSizeOfFundamentalTypes<long> printSize8(a8);
    printSize8.printSizeOf();

    cout << "Get some variables for float: " << endl;
    cin >> a9;
    PrintSizeOfFundamentalTypes<float> printSize9(a9);
    printSize9.printSizeOf();

    cout << "Get some variables for double: " << endl;
    cin >> a10;
    PrintSizeOfFundamentalTypes<double> printSize10(a10);
    printSize10.printSizeOf();

    cout << "Get some variables for long double: " << endl;
    cin >> a11;
    PrintSizeOfFundamentalTypes<long double> printSize11(a11);
    printSize11.printSizeOf();
    
    return 0;
}
