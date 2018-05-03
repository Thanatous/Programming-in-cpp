#include "Matrix.h"

int main(){
    string M_1 = "/Users/Jane/CLionProjects/lab5_cpp/M_1.txt";
    string M_2 = "/Users/Jane/CLionProjects/lab5_cpp/M_2.txt";
    string M_3 = "/Users/Jane/CLionProjects/lab5_cpp/M_3.txt";

    Matrix matrix1;
    Matrix matrix2;
    Matrix matrix3;
    Matrix matrix4(3, 3);

    cout << "Matrix M_1: " << endl;
    matrix1.print(M_1);
    matrix1.show();

    cout << "\nMatrix M_2: " << endl;
    matrix2.print(M_2);
    matrix2.show();

    cout << "\nMatrix M_3: " << endl;
    matrix3.print(M_3);
    matrix3.show();

    cout << "\nMatrix M_4: " << endl;
    cin >> matrix4;
    cout << matrix4;

    cout << "\nMatrix M_1 * Matrix M_2:" << endl;
    (matrix1*matrix2).show();

    cout << "\nIf (Matrix M_1 * Matrix M_2) == Matrix M_3? >> " << ((matrix1*matrix2) == matrix3) <<endl;


    return 0;
}

