#include "head.h"

using namespace std;

int main() {
    //No 2
    cout << "Task No 2" << '\n';

    int a1, b1;
    cout << "Write a1 and b1" << '\n';
    cin >> a1 >> b1;
    increase_variable(&a1, b1);
    cout << a1 << ' ' << b1 << '\n';

    int a2, b2;
    cout << "Write a2 and b2" << '\n';
    cin >> a2 >> b2;
    increase_variable_another(a2, b2);
    cout << a2 << ' ' << b2 << '\n';


    //No 7
    cout << "Task No 7" << '\n';

    int a3;
    float b3;
    cout << "Write a3 and b3" << '\n';
    cin >> a3 >> b3;
    changes_sign(&a3, &b3);
    cout << a3 << ' ' << b3 << '\n';

    int a4;
    float b4;
    cout << "Write a4 and b4" << '\n';
    cin >> a4 >> b4;
    changes_sign_another(a4, b4);
    cout << a4 << ' ' << b4 << '\n';


    //No 10
    cout << "Task No 10" << '\n';
    int a5, b5;
    complex<int> z;
    cout << "Write a5 and b5" << '\n';
    cin >> a5 >> b5;
    z = complex_variable(&a5, &b5);
    cout << z << '\n';

    int a6, b6;
    complex<int> z1;
    cout << "Write a6 and b6" << '\n';
    cin >> a6 >> b6;
    z1 = complex_variable_another(a6, b6);
    cout << z1 << '\n';

    //No 15
    cout << "Task No 15" << '\n';
    vector<vector<float>> matrix;
    float number;
    cout << "Create matrix" << '\n';
    for (int i = 0; i < 3; i++) {
        matrix.emplace_back();
        for (int j = 0; j < 3; j++) {
            cin >> number;
            matrix[i].push_back(number);
        }
    }
    float b;
    cout << "Write multiplier" << '\n';
    cin >> b;
    matrix_multiplier(&matrix, b);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    matrix_multiplier_another(matrix, b);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
