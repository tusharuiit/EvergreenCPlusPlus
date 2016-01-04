#include <iostream>
#include <cstring>
using namespace std;
 
class Teacher
{
public:
    string m_strName;

    Teacher(string strName)
        : m_strName(strName)
    {
    }
 
    string GetName() { return m_strName; }
};
 
class Department
{
public:
    Teacher *m_pcTeacher; // This dept holds only one teacher
 

    Department(Teacher *pcTeacher=NULL)
        : m_pcTeacher(pcTeacher)
    {
    }
};
 
int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *pTeacher = new Teacher("Bob"); // create a teacher
    {
        // Create a department and use the constructor parameter to pass
        // the teacher to it.
        Department cDept(pTeacher);
        //Department cDept;
        cout<< cDept.m_pcTeacher->m_strName <<endl;
        //cout<< cDept.m_pcTeacher <<endl;
        
 
    } // cDept goes out of scope here and is destroyed
 
    // pTeacher still exists here because cDept did not destroy it
    cout<< pTeacher->m_strName << endl;
    delete pTeacher;
}
