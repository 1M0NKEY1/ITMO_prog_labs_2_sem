#include "Set.h"

Set::Set(const Set &copy) {
    this->copy_subset->resize(copy.Size);
    for (int i = 0; i < copy.Size; i++) {
        this->copy_subset[i] = copy.copy_subset[i];
    }
}

Set::Set(int max_size) {
    subset.resize(max_size);
    this->Size = max_size;
}

bool Set::check(int element) {
    sort(subset.begin(), subset.end());
    if (binary_search(subset.begin(), subset.end(), element)) {
        return true;
    } else {
        return false;
    }
}

void Set::add(int new_element) {
    subset.push_back(new_element);
}

void Set::pop() {
    subset.pop_back();
}

vector<int> Set::intersection(vector<int> vec) {
    vector<int> output;
    for (int i = 0; i < subset.size(); i++) {
        for (int j = 0; j < vec.size(); j++) {
            if (subset[i] == vec[j]) {
                output.push_back(vec[j]);
            }
        }
    }
    return output;
}

void Set::unification(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        subset.push_back(vec[i]);
    }
}

void Set::pop_all_elements(vector<int> vec) {
    for (int i = 0; i < subset.size(); i++) {
        for (int j = 0; j < vec.size(); j++) {
            if (subset[i] == vec[j]) {
                swap(subset[i], subset.back());
                subset.pop_back();
            }
        }
    }
}

void Set::show() {
    for (int i = 0; i < subset.size(); i++) {
        cout << subset[i] << ' ';
    }
    cout << '\n';
}

