#ifndef SELF_H
#define SELF_H
#include<string>
#include<Unit.h>


class Self : public Unit
{
    public:
        Self();
        virtual ~Self();
        string getWeapon();
        void setWeapon(int);


    protected:

    private:
        int lightAmmunition;
        int AmmunitionGrenades;
        int AmmunitionRifle;
        bool Rifle;
        bool Pistol;
        bool GrenadeLauncher;
        int weaponID;


};

#endif // SELF_H
