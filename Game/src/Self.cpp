#include "Self.h"
#include<string>
#include<iostream>

using namespace std;

Self::Self()
{

}

Self::~Self()
{
    //dtor
}

string Self::getWeapon()
{
    if(weaponID == 1)
        return "Pistol";

    else if(weaponID == 2)
        return "Rifle";

    else if(weaponID == 3)
        return "Grenade Launcher";

    else
        return "Nothing Selected!";
}

void Self::setWeapon(int weaponID)
{
    this->weaponID = weaponID;
}

