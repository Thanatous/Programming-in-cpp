#ifndef LAB5_MATRIX_MATRIX_H
#define LAB5_MATRIX_MATRIX_H

#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

class Matrix{
private:
    int **arr;
    int row, column;
public:
    Matrix(){}
    Matrix(int r, int c): row(r), column(c){
        arr = new int*[r];
        for(int i = 0; i < r; i++){
            arr[i] = new int[c]{};
        }
    }
    ~Matrix(){}

    void print(string filename){
        ifstream file(filename);

        if(!file.is_open()){
            cerr << "!File doesn't open!";
        }else{
            file >> row >> column;

            arr = new int*[row];
            for(int i = 0; i < row; i++){
                arr[i] = new int[column];
            }

            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    file >> arr[i][j];
                }
            }
        }
        file.close();
    }

    void show(){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+=(Matrix &a)const{
        assert((row == a.row) && (column == a.column));
        Matrix result(a.row, a.column);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                result.arr[i][j] = arr[i][j] + a.arr[i][j];
            }
        }
        return result;
    }

    Matrix operator*(Matrix &a)const{
        assert(column == a.row);
        Matrix result(row, a.column);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < a.column; j++){
                int other = 0;
                for(int k = 0; k < column; k++){
                    other += arr[i][k]*a.arr[k][j];
                }
                result.arr[i][j] = other;
            }
        }
        return  result;
    }

    Matrix operator=(Matrix &a)const{
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                arr[i][j] = a.arr[i][j];
            }
        }
        return *this;
    }

    bool operator==(Matrix &a)const{
        if(row != a.row || column != a.column){
            return false;
        }else{
            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    if(arr[i][j] != a.arr[i][j]){
                        return false;
                    }
                }
            }
        }
        return true;
    }

    friend istream&operator >> (istream& is, Matrix &a){
        for(int i = 0; i < a.row; i++){
            for(int j = 0; j < a.column; j++){
                cout << "arr[" << i << "][" << j << "] = ";
                is >> a.arr[i][j];
                cout << endl;
            }
        }
        return is;
    }

    friend ostream&operator << (ostream& os, Matrix &a){
        for(int i = 0; i < a.row; i++){
            for(int j = 0; j < a.column; j++){
                os << a.arr[i][j] << " ";
            }
            os << "\n";
        }
        os << endl;
        return os;
    }
};

#endif //LAB5_MATRIX_MATRIX_H
