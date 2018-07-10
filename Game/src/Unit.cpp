#include "Unit.h"
#include<iostream>
using namespace std;

Unit::Unit()
{
    //ctor
}

Unit::~Unit()
{
    //dtor
}

void Unit::setCoordinate(Point Coordinates)
{
    this->Coordinates = Coordinates;
}

void Unit::setSpeed(float Speed)
{
    this->Speed = Speed;
}
