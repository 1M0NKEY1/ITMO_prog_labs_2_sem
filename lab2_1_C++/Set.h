#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Set {
private:
    vector<int> *copy_subset;
    int Size;
public:
    vector<int> subset;

    Set(const Set &copy);
    Set(int max_size);

    bool check(int element);
    void add(int new_element);
    void pop();
    vector<int> intersection(vector<int> vec);
    void unification(vector<int> vec);
    void pop_all_elements(vector<int> vec);
    void show();
};

