#ifndef COPY1_H
#define COPY1_H


class Copy1
{
    public:
        Copy1();

        virtual ~Copy1();

        Copy1(const Copy1& other);

        Copy1& operator=(const Copy1& other);

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }
        unsigned int GetCounter1() { return m_Counter1; }
        void SetCounter1(unsigned int val) { m_Counter1 = val; }
        unsigned int GetCounter2() { return m_Counter2; }
        void SetCounter2(unsigned int val) { m_Counter2 = val; }
    protected:
    private:
        unsigned int m_Counter;
        unsigned int m_Counter1;
        unsigned int m_Counter2;
};

#endif // COPY1_H
