#include "Source.h"

template <typename T>
void swap_values(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<int N, class T>
T Massive<N, T>::operator[] (int index) {
    if (index < 0 || index >= N) {
        throw out_of_range("Index out of range. ");
    }
    return array[index];
}
