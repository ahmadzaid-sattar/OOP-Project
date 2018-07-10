#ifndef UNIT_H
#define UNIT_H
#include <string>
using namespace std;

class Unit
{
    public:
        Unit();
        virtual ~Unit();

    protected:
        string Type;
        bool Life;
        Point Coordinates;
        int Health;
        float Width;
        float Height;
        float speed;



    private:
};

#endif // UNIT_H
