#include "Matrix.h"

int main(){
    string M_1 = "/Users/Jane/CLionProjects/lab3_matrix/M_1.txt";
    string M_2 = "/Users/Jane/CLionProjects/lab3_matrix/M_2.txt";

    Matrix<int> matrix1;
    Matrix<int> matrix2;
    Matrix<int> matrix3;
    Matrix<int> matrix4;

    cout << "Matrix M_1: " << endl;
    matrix1.print(M_1);
    matrix1.show();

    cout << "\nMatrix M_2: " << endl;
    matrix2.print(M_2);
    matrix2.show();

    cout << "\nMatrix M_1 + Matrix M_2:" << endl;
    matrix3 = matrix1 + matrix2;
    matrix3.show();

    cout << "\nMatrix M_1 * Matrix M_2:" << endl;
    matrix4 = matrix1 * matrix2;
    matrix4.show();

    return 0;
}
