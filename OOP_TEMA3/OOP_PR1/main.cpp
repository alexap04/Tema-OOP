#include <iostream>
#include <string>
#include "rectangle.h";
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
	rectangle R(a,b);
	double p = R.perimeter();
	double x = R.area();
	cout << p << " " << x;
	return 0;
}
