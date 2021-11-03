class Matrix
{
private:
    vector <vector <double>> matrix;
public:
    Matrix();

    void set_matrix(vector <vector <double>>);

    vector <vector <double>> get_matrix();

    void matrix_size_correct(int, int);

    void matrix_colum_size_correction(int, int);

    void matrix_input_num(int, int, double);

    double matrix_output_num(int, int);

    void matrix_size_show();

    string matrix_size_check(int, int);

    void matrix_all_show();
};
