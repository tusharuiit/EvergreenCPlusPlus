#ifndef TIMEPASS_H
#define TIMEPASS_H


class timepass
{
    public:
        timepass();
        timepass(unsigned int v1, float v2, int v3):m_Counter(v1), a(v2), m_b(v3)
        {

        }
        unsigned int m_Counter;
        float a;
        int m_b;
};

#endif // TIMEPASS_H
