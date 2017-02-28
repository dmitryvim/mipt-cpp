//
// Created by dmitry on 2/28/17.
//

#include "Matrix.h"
#include <cstring>


Matrix::Matrix(const Matrix &m) {
    this->row_count = m.row_count;
    this->col_count = m.col_count;
    this->values = new matrix_cell *[this->row_count];
    for (int i = 0; i < this->row_count; ++i) {
        this->values[i] = new matrix_cell[this->col_count];
        std::memcpy(this->values[i], m.values[i], col_count);
    }
}

Matrix::Matrix(size_t row_count, size_t col_count) :
        row_count(row_count), col_count(col_count) {
    this->values = new matrix_cell *[this->row_count];
    for (int i = 0; i < this->row_count; ++i) {
        this->values[i] = new matrix_cell[this->col_count];
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < this->row_count; ++i) {
        delete[]this->values[i];
    }
    delete[]this->values;
}

matrix_cell Matrix::get(size_t row, size_t col) const {
    return this->values[row][col];
}

void Matrix::set(size_t row, size_t col, matrix_cell value) {
    this->values[row][col] = value;
}

std::ostream &operator<<(std::ostream &out, const Matrix &matrix) {
    for (int row = 0; row < matrix.row_count; ++row) {
        for (int col = 0; col < matrix.col_count; ++col) {
            out << matrix.values[row][col] << " ";
        }
        out << std::endl;
    }
    return out;
}

std::istream &operator>>(std::istream &in, const Matrix &matrix) {
    for (int row = 0; row < matrix.row_count; ++row) {
        for (int col = 0; col < matrix.col_count; ++col) {
            in >> matrix.values[row][col];
        }
    }
    return in;
}
