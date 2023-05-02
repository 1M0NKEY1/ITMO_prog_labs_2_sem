#include "Set.h"

int main() {

    int size;
    vector<int> a;

    cout << "Write size of set" << '\n';
    cin >> size;
    a.resize(size);
    cout << "Write set" << '\n';
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    Set set(size);
    set.subset = a;

    int max_size;
    cout << "Write max size of set" << '\n';
    cin >> max_size;
    Set set1(max_size);

    cout << "Write element to check" << '\n';
    int element;
    cin >> element;
    if (set.check(element)) {
        cout << "Element in set" << '\n';
    } else {
        cout << "Set doesnt has this element" << '\n';
    }

    cout << "Write element to add" << '\n';
    cin >> element;
    set.add(element);
    set.show();

    cout << "Extract element out of set" << '\n';
    set.pop();
    set.show();

    cout << "Intersection of 2 sets" << '\n';
    cout << "Write size and set for intersection " << '\n';
    vector<int> int_vec;
    int size1;
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> int_vec[i];
    }
    for (int i = 0; i < set.intersection(int_vec).size(); i++) {
        cout << set.intersection(int_vec)[i] << ' ';
    }

    cout << "Unification of 2 sets" << '\n';
    cout << "Write size and set for unification" << '\n';
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> int_vec[i];
    }
    set.unification(int_vec);
    set.show();

    cout << "Write size and set for unification" << '\n';
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> int_vec[i];
    }
    set.pop_all_elements(int_vec);
    set.show();

    return 0;
}
