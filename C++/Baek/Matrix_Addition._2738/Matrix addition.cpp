#include <iostream>
using namespace std;

class Matrix{
    int rows, cols;
    int** data;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols){
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix(){
        for (int i = 0; i < rows; ++i){
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        for (int i = 0; i < rows; ++i){
            for (int j = 0; j < cols; ++j){
                cin >> data[i][j];
            }
        }
    }

    void addAndPrint(const Matrix& other) const{
        for (int i = 0; i < rows; ++i){
            for (int j = 0; j < cols; ++j){
                cout << data[i][j] + other.data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    Matrix matrix1(N, M), matrix2(N, M);
    matrix1.input();
    matrix2.input();
    matrix1.addAndPrint(matrix2);
}