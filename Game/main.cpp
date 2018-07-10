#include <iostream>
#include"Point.h"
#include"Unit.h"
#include"Self.h"

using namespace std;

int main()
{
    Self s;
    cout<<s.getWeapon()<<endl;
    s.setWeapon(1);
    cout<<s.getWeapon();
    return 0;
}
