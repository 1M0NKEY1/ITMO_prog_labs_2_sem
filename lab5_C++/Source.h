#include <iostream>

using namespace std;

template <class T>
void swap_values(T& a, T& b);

template <int N, class T>
class Massive {
private:
    T array[N];
public:
    T operator[] (int index);
};


