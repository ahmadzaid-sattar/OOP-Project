#ifndef UNIT_H
#define UNIT_H
#include <string>
#include"Point.h"
using namespace std;

class Unit
{
    public:
        Unit();
        virtual ~Unit();
        void setCoordinate(Point Coordinates);
        void setSpeed(float Speed);
        void setFriction(float Friction);
        int getHealth();

    protected:
        string Type;
        bool Life;
        Point Coordinates;
        int Health;
        float Width;
        float Height;
        float Speed;
        float Friction;



    private:
};

#endif // UNIT_H
