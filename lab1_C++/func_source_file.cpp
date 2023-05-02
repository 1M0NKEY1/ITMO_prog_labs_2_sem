#include "head.h"

using namespace std;

// No 2
void increase_variable(int *a, int b) {
    *a += b;
}

void increase_variable_another(int &a, int b) {
    a += b;
}

// No 7
void changes_sign(int *a, float *b) {
    int tmp = -1;
    *a *= tmp;
    *b *= tmp;
}

void changes_sign_another(int &a, float &b) {
    int tmp = -1;
    a *= tmp;
    b *= tmp;
}

// No 10
complex<int> complex_variable(int *a, int *b) {
    complex<int> tmp_z(*a, *b);
    return conj(tmp_z);
}

complex<int> complex_variable_another(int &a, int &b) {
    complex<int> z(a, b);
    b *= -1;
    complex<int> tmp_z(a, b);
    return tmp_z;
}

//No 15
void matrix_multiplier(vector<vector<float>>* matrix, float b) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            (*matrix)[i][j] *= b;
        }
    }
}

void matrix_multiplier_another(vector<vector<float>>& matrix, float b) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] *= b;
        }
    }
}
