#ifndef _Matrix_
#define _Matrix_

#include <vector>

class Matrix
{
private:
    std::vector <std::vector <double>> matrix;
public:
    Matrix();

    void set_matrix(std::vector <std::vector <double>>);

    std::vector <std::vector <double>> get_matrix();

    void matrix_size_correct(int, int);

    void matrix_colum_size_correction(int, int);

    void matrix_input_num(int, int, double);

    double matrix_output_num(int, int);

    void matrix_size_show();

    std::string matrix_size_check(int, int);

    void matrix_all_show();
};

#endif