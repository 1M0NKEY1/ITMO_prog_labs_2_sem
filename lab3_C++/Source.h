#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double real = 0, double imag = 0) : real(real), imag(imag) {}
    Complex operator+(const Complex& x) const; // оператор сложения
    Complex operator*(const Complex& x) const; // оператор умножение
    double operator~() const; // оператор определения длины через double
};

class FIFO {
private:
    void push(int value); // внесение в очередь
    int pop(); //удаление из очереди
    bool empty(); // проверка на наличие чисел в очереди
public:
    struct Node {
        int value;
        struct Node *next;
    };
    FIFO operator<<(int x);
    FIFO operator>>(int& x);
};
