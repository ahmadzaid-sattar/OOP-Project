#include <iostream>
#include"Point.h"
#include"Unit.h"

using namespace std;

int main()
{
    Point p(12,15);
    p.showPoint();
    Unit U;
    U.setCoordinate(p);
    return 0;
}
