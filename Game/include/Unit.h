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
        //void setSpeed();
        void setCoordinate(Point Coordinates);
        void setSpeed(float Speed);

    protected:
        string Type;
        bool Life;
        Point Coordinates;
        int Health;
        float Width;
        float Height;
        float Speed;



    private:
};

#endif // UNIT_H
