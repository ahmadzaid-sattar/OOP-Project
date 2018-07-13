#include <iostream>
#include<list>
#include"Point.h"
#include"Unit.h"
#include"Self.h"
#include"Bullet.h"

using namespace std;

//function for printing the elements in a list
void showlist(list <Point> g)
{
    list <Point> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        //cout << '\t' <<
        it->showPoint();
    cout << '\n';
}

int main()
{
    /*Self s;
    cout<<s.getWeapon()<<endl;
    s.setWeapon(1);
    cout<<s.getWeapon();*/
    Point p1(4,5);
    Point p2(41,52);
    Point p3(7,9);
    Point p4(11,2);
    list <Point> s;
    s.push_front(p1);
    s.push_front(p2);
    s.push_front(p3);
    s.push_front(p4);
    showlist(s);

    return 0;
}


