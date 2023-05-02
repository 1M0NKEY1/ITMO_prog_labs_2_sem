#include <iostream>
#include <vector>
#include <complex>

using namespace std;

void increase_variable(int *a, int b);
void increase_variable_another(int &a, int b);
void changes_sign(int *a, float *b);
void changes_sign_another(int &a, float &b);
complex<int> complex_variable(int *a, int *b);
complex<int> complex_variable_another(int &a, int &b);
void matrix_multiplier(vector<vector<float>>* matrix, float b);
void matrix_multiplier_another(vector<vector<float>>& matrix, float b);
