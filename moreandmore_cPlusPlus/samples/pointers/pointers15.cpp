#include<iostream>
int main()
{
  
  int *p=NULL ;
  if(p!=NULL)
  {
      std::cout<<"i l u "<<std::endl;
  }
  else
  {
      std::cout<<"i hate u "<<std::endl;
  }
  
  if (!p)
  {
      std::cout<<"i l u "<<std::endl;
  }
  else
  {
      std::cout<<"i hate u "<<std::endl;
  }
  
  if (!(p))
  {
      std::cout<<"i l u "<<std::endl;
  }
  else
  {
      std::cout<<"i hate u "<<std::endl;
  }
}
