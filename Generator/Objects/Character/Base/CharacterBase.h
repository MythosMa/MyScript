#ifndef __CHARACTER_BASE__
#define __CHARACTER_BASE__

#include <stdio.h>

using namespace std;

class CharacterBase
{
private:
    /* data */
protected:
    string name;
    virtual void init();
public:
    CharacterBase(/* args */);
    ~CharacterBase();
};

#endif