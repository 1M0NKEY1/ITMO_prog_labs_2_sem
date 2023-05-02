#include "Source.h"

double Trapezoid::square() {
    return (a + b) * h/2;
}

double Trapezoid::perimeter() {
    return a + b + (2 * c);
}

double Trapezoid::mass() {
    return mass_of_obj;
}

double Trapezoid::centre_mass() {
    return (h/3) * (2*b + a) / (a + b);
}

bool Trapezoid::operator==(const Physical_object &object) const {
    if (const Trapezoid* tmp = dynamic_cast<const Trapezoid*>(&object)) {
        return mass_of_obj == tmp->mass_of_obj;
    } else {
        return false;
    }
}

bool Trapezoid::operator<(const Physical_object &object) const {
    if (const Trapezoid* tmp = dynamic_cast<const Trapezoid*>(&object)) {
        return mass_of_obj < tmp->mass_of_obj;
    } else {
        return false;
    }
}

void Trapezoid::draw() {
    Physical_object* tmp = new Trapezoid(mass_of_obj);
    cout << "Parameters: " << a << '\t' << b << '\t' << c << '\t' << h << '\n';
    cout << "Square: " << square() << '\n';
    cout << "Perimeter: " << perimeter() << '\n';
    cout << "Mass: " << tmp->mass() << '\n';
    cout << "Centre of mass: " << tmp->centre_mass() << '\n';
}

void Trapezoid::init() {
    cout << "Write a, b, c, h, mass_of_obj" << '\n';
    cin >> a >> b >> c >> h;
    cin >> mass_of_obj;
    cout << "Write counts" << '\n';
    cin >> counts;
    cout << "Write name" << '\n';
    cin >> name_of_fig;
}

const char *Trapezoid::name() {
    return name_of_fig;
}

unsigned int Trapezoid::size() {
    return counts;
}


