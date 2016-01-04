#ifndef NAME_H
#define NAME_H
#include<string>

class name
{
    public:
        name(std::string vorname, std::string familiename);

    private:
        std::string m_vorname;
        std::string m_familiename;
};

#endif // NAME_H
