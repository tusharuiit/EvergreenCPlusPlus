#include<iostream>
int main()
{
  struct date {int day;int month;};
  date joindate;
  date *p=&joindate;
  joindate.day = 3;
  joindate.month = 4;  
  std::cout<<(*p).day<<std::endl;
  //std::cout<<*p.day<<std::endl;
  std::cout<<*(p.day)<<std::endl;
}
