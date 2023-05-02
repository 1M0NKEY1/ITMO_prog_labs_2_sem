#include "Source.h"

vector<Section> arr_of_sec;

double Section::square() {
    return x - x_0;
}

double Section::perimeter() {
    return x - x_0;
}

double Section::mass() {
    return mass_of_obj;
}

double Section::centre_mass() {
    return (x - x_0) / 2;
}

bool Section::operator==(const Physical_object &object) const {
    if (const Section* tmp = dynamic_cast<const Section*>(&object)) {
        return mass_of_obj == tmp->mass_of_obj;
    } else {
        return false;
    }
}

bool Section::operator<(const Physical_object &object) const {
    if (const Section* tmp = dynamic_cast<const Section*>(&object)) {
        return mass_of_obj < tmp->mass_of_obj;
    } else {
        return false;
    }
}

void Section::draw() {
    Physical_object* tmp = new Section(mass_of_obj);
    cout << "Parameters: " << x_0 << '\t' << x << '\n';
    cout << "Square: " << square() << '\n';
    cout << "Perimeter: " << perimeter() << '\n';
    cout << "Mass: " << tmp->mass() << '\n';
    cout << "Centre of mass: " << tmp->centre_mass() << '\n';
}

void Section::init() {
    cout << "Write x, x_0, mass_of_obj" << '\n';
    cin >> x >> x_0;
    cin >> mass_of_obj;
    cout << "Write counts" << '\n';
    cin >> counts;
    cout << "Write name" << '\n';
    cin >> name_of_fig;
}

const char *Section::name() {
    return name_of_fig;
}

unsigned int Section::size() {
    return counts;
}

