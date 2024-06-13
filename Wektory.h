#pragma once
#include <string>
using namespace std;

class Vector {
private:
    double v_x;
    double v_y;
    Vector();
    Vector(double x = 0, double y = 0);

public:
    void show();
    static Vector LengthAndAngle(double length, double angle);
    static Vector XY(double x, double y);
};