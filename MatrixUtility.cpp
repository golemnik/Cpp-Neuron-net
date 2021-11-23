#include <iostream>
#include <fstream>
#include "MatrixUtility_Header.h"
#include "Matrix_Header.h"

using namespace std;

Matrix MatrixUtility::load_matrix(string file_name) {
    ifstream file_read(file_name.c_str(), ios_base::in);

    if (file_read.is_open()) {
        cout << "file " << file_name << " is opened and ready for reading" << endl;

        Matrix tab;
        double num;
        int size_cor;

        file_read >> size_cor;

        tab.matrix_size_correct(size_cor, size_cor);

        for (int i = 0; i < tab.matrix_Xsize(); i++) {
            for (int j = 0; j < tab.matrix_Ysize(i); j++) {
                file_read >> num;
                tab.matrix_write_in(i, j, num);
            }
        }

        tab.matrix_transport(cout);
        file_read.close();
        return tab;
    }
    else {
        string err = "file " + file_name + " isn't opened";
        throw runtime_error(err);
    }
}

void MatrixUtility::save_matrix(string file_name, Matrix tab) {
    ofstream file_write(file_name.c_str(), ios_base::trunc);

    if (file_write.is_open()) {
        cout << "file " << file_name << " is opened and ready for writing" << endl;

        tab.matrix_transport(file_write);
        file_write.close();
    }
    else {
        string err = "file " + file_name + " isn't opened";
        throw runtime_error(err);
    }
}
