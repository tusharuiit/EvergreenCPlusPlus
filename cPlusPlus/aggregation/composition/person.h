#ifndef PERSON_H
#define PERSON_H
#include "name.h"
#include "height.h"

class person
{
    public:
        person(name namevalue, height heightvalue);
    private:
        name m_name;
        height m_height;
};

#endif // PERSON_H
