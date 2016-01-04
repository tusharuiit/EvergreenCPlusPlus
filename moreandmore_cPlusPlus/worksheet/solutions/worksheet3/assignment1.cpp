#include <iostream>
#include <cstdio> // for getchar()
using namespace std;
void scenery_garchingforschung();
void scenery_garchingforschungrevisited();
void scenery_entrance();
void scenery_entrancerevisited();
void scenery_meetgirl();
void scenery_talktogirl();
void scenery_lab();
void scenery_garchingforschung()
{
    std::cout<<"After an exhaustive party last night you are sitting in the sub which just reached the final destination 'Garching Forschungszentrum' Do you want to stay or getdown? (s/g) "<<endl;
    char chChar = getchar();
    if (chChar == 's')
         {scenery_garchingforschungrevisited(); }
    else if (chChar == 'g')     
         {scenery_entrance();}   
    else 
         {cout<<"u lose with wrong input 1"<<endl;}
    cout<<"scenery_garchingforschung"<<endl;
}
void scenery_garchingforschungrevisited()
{
    std::cout<<"u r back at 'Garching Forschungszentrum' Do you want to stay or getdown? (s/g) "<<endl;
    char chChar1 = getchar();
    char chChar = getchar();
    if (chChar == 's')
         {scenery_garchingforschungrevisited();}
    else if (chChar == 'g')     
         {scenery_entrance();}   
    else 
         {cout<<"u lose with wrong input 2"<<endl;}
    cout<<"scenery_garchingforschungrevisited"<<endl;     
}
void scenery_entrance()
{
    std::cout<<"outside the woods are lovely dark and deep Do you want to inside or outside? (i/o) "<<endl;
    char chChar1 = getchar();
    char chChar = getchar();
    if (chChar == 'i')
         {scenery_meetgirl(); }
    else if (chChar == 'o')     
         {scenery_entrancerevisited();}   
    else 
         {cout<<"u lose with wrong input"<<endl;}
    cout<<"scenery_entrance"<<endl;
}
void scenery_entrancerevisited()
{
    std::cout<<"u are back at entrance,  Do you want to inside or outside? (i/o) "<<endl;
    char chChar1 = getchar();
    char chChar = getchar();
    if (chChar == 'i')
         {scenery_meetgirl(); }
    else if (chChar == 'o')     
         {scenery_entrancerevisited();}   
    else 
         {cout<<"u lose with wrong input"<<endl;}
    cout<<"scenery_entrancerevisited"<<endl;     
}
void scenery_meetgirl()
{
    std::cout<<"the girl is hot,  Do you want to talk or lab? (t/l) "<<endl;
    char chChar1 = getchar();
    char chChar = getchar();
    if (chChar == 't')
         {scenery_talktogirl(); }
    else if (chChar == 'l')     
         {scenery_lab();}   
    else 
         {cout<<"u lose with wrong input"<<endl;}
    cout<<"scenery_meetgirl"<<endl;
}
void scenery_talktogirl()
{
    std::cout<<"enuff talking,  Do you want to talk or lab? (t/l) "<<endl;
    char chChar1 = getchar();
    char chChar = getchar();
    if (chChar == 't')
         {scenery_talktogirl(); }
    else if (chChar == 'l')     
         {scenery_lab();}   
    else 
         {cout<<"u lose with wrong input"<<endl;}
    cout<<"scenery_talktogirl"<<endl;
}
void scenery_lab()
{
    {cout<<"u win"<<endl;}
}

int main()
{		
    scenery_garchingforschung();
    
}
