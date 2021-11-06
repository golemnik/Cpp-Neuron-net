#include <iostream>
#include <vector>
#include <math.h>
#include <ctime>

#include "Matrix_Header.h"

#include <fstream>
#include <sstream> // getline need it :{

using namespace std;

string file_place_add(string file_name) {
    string file_open_path = "D:\\Dev\\Neuron net\\Cpp Neuron net\\";
    return file_open_path + file_name;
}

void file_read(string file_name) {
    ifstream file_read (file_place_add(file_name).c_str(), ios_base::in);

    if (file_read.is_open()) {
        cout << "file " << file_name << " is opened and ready for reading" << endl;
        string size;
        getline (file_read, size);
        file_read.seekg(0, ios_base::beg);

        Matrix tab;
        int num;
        int size_cor = (size.size() + 1) / 2;
        tab.matrix_size_correct(size_cor, size_cor);

        for (int i = 0; i < tab.matrix_Xsize(); i++) {
            for (int j = 0; j < tab.matrix_Ysize(i); j++) {
                file_read >> num;
                tab.matrix_write_in(i, j, num);
            }
        }

        tab.matrix_all_show();
        file_read.close();
    }
    else {
        cout << "file " << file_name << " isn't opened" << endl;
    }
}

void file_write(string file_name) {
    ofstream file_write(file_place_add(file_name).c_str(), ios_base::trunc);

    if (file_write.is_open()) {
        cout << "file " << file_name << " is opened and ready for writing" << endl;

        file_write.close();
    }
    else {
        cout << "file " << file_name << " isn't opened" << endl;
    }
}

int main()
{
    srand(time(0)); //1 + rand() % 10

    // создание матрицы нейроннов

    string file_name = "text.txt";
    

    file_read(file_name);
    //file_write(file_name);

    /*
    Matrix M_link;

    M_link.matrix_size_correct(3, 3);
    M_link.matrix_colum_size_correction(2, 1);
    M_link.matrix_all_show();
    */

    cout << "done";
    return 0;
}
