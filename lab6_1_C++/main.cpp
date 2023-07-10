#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename Iterator, typename Predicate>
bool all_of(Iterator begin, Iterator end, Predicate pred) {
    for (auto i = begin; i != end; i++) {
        if (!pred(*i)) {
            return false;
        }
    }
    return true;
}

template <typename Iterator, typename Predicate>
bool is_partitioned(Iterator begin, Iterator end, Predicate pred) {
    bool partition_found = false;
    for (auto i = begin; i != end; ++i) {
        if (pred(*i)) {
            partition_found = true;
        } else if (partition_found) {
            for (auto j = i; j != end; ++j) {
                if (pred(*j)) {
                    return false;
                }
            }
            break;
        }
    }
    return true;
}

template <typename Iterator, typename Value>
Iterator find_backward(Iterator begin, Iterator end, const Value& value) {
    auto i = end;
    while (i != begin) {
        --i;
        if (*i == value) {
            return i;
        }
    }
    return end;
}

class CPoint {
private:
            double m_x;
            double m_y;
public:
            CPoint(double x = 0.0, double y = 0.0) : m_x(x), m_y(y) {}

            double getX() const {
                return m_x;
            }

            double getY() const {
                return m_y;
            }

            bool operator==(const CPoint& other) const {
                return m_x == other.m_x && m_y == other.m_y;
            }
        };


int main() {
    // вектор точек
    vector<CPoint> points = { CPoint(0, 0), CPoint(1, 1), CPoint(2, 2), CPoint(3, 3) };

    // Проверка, что все точки находятся на главной диагонали
    bool all_on_diagonal = ::all_of(points.begin(), points.end(),
                                    [](const CPoint& p) { return p.getX() == p.getY(); });
    cout << "All points on diagonal: " << boolalpha << all_on_diagonal << '\n';

    // Разделение точек на две группы в зависимости от координаты x
    auto mid = partition(points.begin(), points.end(),
                         [](const CPoint& p) { return p.getX() < 2; });

    // Проверка, что все точки с координатой x < 2 действительно находятся в первой группе
    bool is_correctly_partitioned = ::is_partitioned(points.begin(), mid,
                                                     [](const CPoint& p) { return p.getX() < 2; });
    cout << "Points correctly partitioned: " << boolalpha << is_correctly_partitioned << '\n';

    // Ищем последнюю точку с координатой y = 2
    auto last_y2 = find_backward(points.begin(), points.end(), CPoint(0, 2));

    if (last_y2 != points.end()) {
        cout << "Last point with y = 2: (" << last_y2->getX() << ", " << last_y2->getY() << ")" << '\n';
    } else {
        cout << "No points with y = 2" << '\n';
    }

    return 0;
}
