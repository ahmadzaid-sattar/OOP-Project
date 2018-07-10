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



    private:
};

#endif // UNIT_H
