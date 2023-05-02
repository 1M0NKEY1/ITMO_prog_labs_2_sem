#include "Source.h"

Complex Complex::operator+(const Complex &x) const {
    return Complex(real + x.real, imag + x.imag);
}

Complex Complex::operator*(const Complex &x) const {
    return Complex(real * x.real - imag * x.imag, real * x.imag + imag * x.real);
}

double Complex::operator~() const {
    return sqrt(real * real + imag * imag);
}


struct FIFO::Node *up = nullptr;

void FIFO::push(int value) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node -> value = value;
    new_node -> next = up;
    up = new_node;
}

int FIFO::pop() {
    Node* tmp = up;
    int p = tmp -> value;
    if (up != nullptr) {
        up = up -> next;
    }
    delete tmp;
    return p;
}

bool FIFO::empty() {
    Node *tmp = up;
    return tmp == nullptr;
}

FIFO FIFO::operator<<(int x) {
    push(x);
    return *this;
}

FIFO FIFO::operator>>(int& x) {
    if (empty()) {
        x = up -> value;
        pop();
    }
    return *this;
}

