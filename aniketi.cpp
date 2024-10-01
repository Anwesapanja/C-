#include <iostream>

class Matrix_2D {
public:
    Matrix_2D() {
        arr = NULL;
        rows = cols = 0;
    }

    Matrix_2D(size_t r, size_t c) {
        if(r == 0) {
            Matrix_2D();
            return;
        }

        rows = r;
        cols = c;

        arr = new int*[rows];
        for(size_t r = 0; r < rows; r++) 
            arr[r] = new int[cols];
    }

    Matrix_2D(Matrix_2D &m) {
        rows = m.rows;
        cols = m.cols;
        arr = m.arr;

        m.arr = NULL;
        m.rows = 0;
        m.cols = 0;
    }

    Matrix_2D(const Matrix_2D &m) {        
        Matrix_2D(m.rows, m.cols);
        for(size_t r = 0; r < rows; r++)
            for(size_t c = 0; c < cols; c++)
                arr[r][c] = m.arr[r][c];
    }

    ~Matrix_2D() {
        for(size_t r = 0; r < rows; r++)
            delete[] arr[r];

        delete[] arr;
        arr = NULL;
    }

    void input() {
        if(arr == NULL) return;

        for(size_t r = 0; r < rows; r++) {
            for(size_t c = 0; c < cols; c++) {
                std::cout << "[" << r << "][" << c << "]: ";
                std::cin >> arr[r][c];
            }
        }
    }

    void print() {
        if(rows == 0) return;

        for(size_t r = 0; r < rows; r++) {
            for(size_t c = 0; c < cols; c++)
                std::cout << arr[r][c] << " ";

            std::cout << std::endl;
        }
    }

    Matrix_2D operator+ (Matrix_2D &m) {
        if(rows != m.rows) return Matrix_2D();

        Matrix_2D x(rows, cols);

        for(size_t r = 0; r < rows; r++)
            for(size_t c = 0; c < cols; c++)
                x.arr[r][c] = arr[r][c] + m.arr[r][c];

        return x;
    }

private:
    int **arr;
    size_t rows, cols;
};


int main() {
    size_t r, c;
    std::cout << "Input matrix size(r, c): ";
    std::cin >> r >> c;

    if(r == 0) {
        std::cout << "Size of matrix cannot be zero\n";
        return 1;
    }

    Matrix_2D mat1(r, c), mat2(r, c);
    
    std::cout << "Input:\nMatrix: 1\n";
    mat1.input();
    std::cout << "Matrix: 2\n";
    mat2.input();

    std::cout << "Output:\nMatrix: 1\n";
    mat1.print();
    std::cout << "Matrix: 2\n";
    mat2.print();

    Matrix_2D result = mat1 + mat2;
    std::cout << "Matrix Sum\n";
    result.print();

    return 0;
}