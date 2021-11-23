#ifndef _MatrixUtility_
#define _MatrixUtility_

#include <string>
#include "Matrix_Header.h"

class MatrixUtility {
public:
    static Matrix load_matrix(std::string);

    static void save_matrix(std::string, Matrix);
};

#endif