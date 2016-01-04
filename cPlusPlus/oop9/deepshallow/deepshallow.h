#ifndef DEEPSHALLOW_H
#define DEEPSHALLOW_H


class deepshallow
{
    public:
//        deepshallow();
        deepshallow(int size, int value);
        virtual ~deepshallow();
        deepshallow(const deepshallow& other);
        deepshallow& operator=(const deepshallow& other);
        int m_value;
        int * m_dynamic_value;

        void print();
    protected:
    private:

};

#endif // DEEPSHALLOW_H
