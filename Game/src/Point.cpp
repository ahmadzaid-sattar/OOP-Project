#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
    //ctor
}

Point::Point(float pointX, float pointY)
{
    this->pointX = pointX;
    this->pointY = pointY;
}

void Point::showPoint()
{
    cout<<this->pointX<<endl;
    cout<<this->pointY<<endl;
}

Point::~Point()
{

}
