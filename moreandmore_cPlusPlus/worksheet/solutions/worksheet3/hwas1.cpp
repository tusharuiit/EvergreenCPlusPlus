#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    bool quit = 0;
    int sceneid = 1;
    while (!quit)
    {
      switch(sceneid)
      {
        case 1:
           std::cout<<"After an exhaustive party last night you are sitting in the sub which just reached the final destination 'Garching Forschungszentrum' Do you want to stay(2) or getdown(3)? (2/3) "<<endl;
           cin>>sceneid;
           break;   
        case 2:
           std::cout<<"u r back at 'Garching Forschungszentrum' Do you want to stay or getdown? (2/3) "<<endl;
           cin>>sceneid;
           break;
        case 3:
           std::cout<<"outside the woods are lovely dark and deep Do you want to inside or outside? (4/5) "<<endl;
           cin>>sceneid;
           break;
        case 4:
           std::cout<<"u are back at entrance,  Do you want to inside(5) or outside(4)? (4/5) "<<endl;
           cin>>sceneid;
           break;
        case 5:
           std::cout<<"the girl is hot,  Do you want to talk(6) or lab(7)?(6/7) "<<endl;
           cin>>sceneid;
           break;
        case 6:
           std::cout<<"enuff talking,  Do you want to talk(6) or lab(7)? (6/7) "<<endl;
           cin>>sceneid;
           break;
        case 7:
           cout<<"u win"<<endl;
           quit = 1;
           break;
                  
      }   
    }
     
}
