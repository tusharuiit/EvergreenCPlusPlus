#include <iostream>
using namespace std;
int main ()
{
	double xa,xb,ya,yb,xr,yr;
	cout << "please enter the value xa ";
	cin>> xa;
	cout << "please enter the value xb ";
	cin>>xb;
	cout << "please enter the value f(xa) ";
	cin>>ya;
	cout << "please enter the value f(xb) ";
	cin>>yb;
	cout << "please enter the value xr ";
	cin>>xr;
        yr = ya+((yb-ya)*((xr-xa)/(xb-xa)));
	cout << "the function value at xr is  "<<yr;
}
