#pragma once
#include"Unit.h"

struct Node
{
    Unit* Data;
    Node* Next;
    Node* Prev;

    ~Node()d
    {
        delete unit;
    }
};
