#include <iostream>
#include <vector>
#include <math.h>
#include <ctime>

#include "Matrix_Header.h"

using namespace std;

//constants ^-^
const double e = 2.71828182845;

int main()
{
    srand(time(0)); //1 + rand() % 10

    // создание матрицы нейроннов

    Matrix M_link;

    M_link.matrix_size_correct(3, 3);
    M_link.matrix_colum_size_correction(2, 1);
    M_link.matrix_all_show();


    cout << "done";
    return 0;
}
