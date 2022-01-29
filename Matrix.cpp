#include <iostream>
#include <vector>

#include "Matrix_Header.h"

using namespace std;


Matrix::Matrix() {
    vector <vector <double> > matrix_data[1][1];
}

void Matrix::set_matrix(vector <vector <double> > matrix_data) {
    matrix = matrix_data;
}

vector <vector <double> > Matrix::get_matrix() {
    return matrix;
}

void Matrix::matrix_size_correct(int colums, int lays) {
    matrix.assign(colums, vector <double>(lays));
}

void Matrix::matrix_colum_size_correction(int colum, int lay) {
    matrix[colum].resize(lay);
}

void Matrix::matrix_input_num(int colum, int lay, double num) {
    matrix[colum][lay] = num;
}

double Matrix::matrix_output_num(int colum, int lay) {
    return matrix[colum][lay];
}

void Matrix::matrix_size_show() {
    for (int i = 0; i != matrix.size(); i++) {
        cout << matrix[i].size() << endl;
    }
    cout << matrix.size() << endl;
}

void Matrix::matrix_write_in(int colum, int lay, double num ) {
    matrix[colum][lay] = num;
}

double Matrix::matrix_read_out(int colum, int lay) {
    return matrix[colum][lay];
}

int Matrix::matrix_Xsize() {
    return matrix.size();
}

int Matrix::matrix_Ysize(int colum) {
    return matrix[colum].size();
}

string Matrix::matrix_size_check(int colum, int lay) {
    string check = "Correct";
    if (matrix.size() == colum) {
        for (size_t i = 0; i < matrix.size(); i++) {
            if (matrix[i].size() == lay) {

            }
            else {
                check = "Incorrect";
            }
        }
    }
    else {
        check = "Incorrect";
    }

    return check;
}

void Matrix::matrix_transport(ostream& output) {
    output << matrix.size() << endl;
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            output << matrix_output_num(i, j) << " ";
        }
        output << endl;
    }
}