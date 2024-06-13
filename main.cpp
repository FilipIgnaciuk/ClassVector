#include <iostream>
#include "Wektory.h"
using namespace std;

int main() {

    Vector v1 = Vector::XY(12, 3);
    v1.show();

    Vector v2 = Vector::LengthAndAngle(6, 0);
    v2.show();

    return 0;
}