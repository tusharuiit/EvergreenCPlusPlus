class Something
{
public:
    int m_nValue;
 
    Something() { m_nValue = 0; }
 
    void ResetValue() { m_nValue = 0; }
    void SetValue(int nValue) { m_nValue = nValue; }
 
    int GetValue() const { 
    int a = 5;a = 6;
    //not allowed m_nValue = 1;
    return m_nValue; }
};

int main()
{}
