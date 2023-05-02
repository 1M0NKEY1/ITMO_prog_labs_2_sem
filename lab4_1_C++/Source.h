#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Geometric_fig {
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

class Physical_object {
public:
    virtual double mass() = 0;
    virtual double centre_mass() = 0;
    virtual bool operator== (const Physical_object& object) const = 0;
    virtual bool operator< (const Physical_object& object) const = 0;
};

class Show {
public:
    virtual void draw() = 0;
};

class Dialog {
public:
    virtual void init() = 0;
};

class Base_object {
public:
    virtual const char* name() = 0;
    virtual unsigned int size() = 0;
};

class Section : public Geometric_fig,
                public Physical_object,
                public Show,
                public Dialog,
                public Base_object {
private:
    double x, x_0, mass_of_obj;
    int counts;
    char* name_of_fig;
public:
    Section(double mass_of_object = 0) : mass_of_obj(mass_of_object) {}
    double square() override;
    double perimeter() override;
    double mass() override;
    double centre_mass() override;
    bool operator== (const Physical_object& object) const override;
    bool operator< (const Physical_object& object) const override;
    void draw() override;
    void init() override;
    const char* name() override;
    unsigned int size() override;
};

class Trapezoid : public Geometric_fig,
                  public Physical_object,
                  public Show,
                  public Dialog,
                  public Base_object {
private:
    double a, b, c, h, mass_of_obj;
    int counts;
    char* name_of_fig;
public:
    Trapezoid(double mass_of_object = 0) : mass_of_obj(mass_of_object) {}
    double square() override;
    double perimeter() override;
    double mass() override;
    double centre_mass() override;
    bool operator== (const Physical_object& object) const override;
    bool operator< (const Physical_object& object) const override;
    void draw() override;
    void init() override;
    const char* name() override;
    unsigned int size() override;
};