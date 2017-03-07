//
// Created by dmitry on 2/28/17.
//

#ifndef MIPT_CPP_MATRIX_H
#define MIPT_CPP_MATRIX_H

#include <cstdlib>
#include <iostream>

typedef int matrix_cell;

class Matrix {
private:
    size_t row_count;
    size_t col_count;
    matrix_cell **values;

public:
    Matrix(const Matrix &);

    Matrix(size_t, size_t);

    ~Matrix();

    matrix_cell get(size_t, size_t) const;

    void set(size_t, size_t, matrix_cell);

    friend std::ostream &operator<<(std::ostream &, const Matrix &);

    friend std::istream &operator>>(std::istream &, Matrix &);

    static Matrix eye(size_t);
};


#endif //MIPT_CPP_MATRIX_H
