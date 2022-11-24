#include <iostream>
using namespace std;

class ComplexNumber{
    int Re;
    int Img;

public:
    ComplexNumber(int Re, int Img) {
        this->Re = Re;
        this->Img = Img;
    }
    int suma1(ComplexNumber x) {
        return this->Re + x.Re;
    }
    int suma2(ComplexNumber x) {
        return this->Img + x.Img;
    }
    int inmultire1(ComplexNumber x) {
        return this->Re * x.Re - this->Img *x.Img;
    }
    int inmultire2(ComplexNumber x) {
        return this->Re * x.Img + this->Img * x.Re;
    }
};
int main()
{
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    ComplexNumber ab(a, b);
    ComplexNumber cd(c, d);
    cout << ab.suma1(cd) << "+" << ab.suma2(cd) << "*i" << endl;
    cout << ab.inmultire1(cd) << "+" << ab.inmultire2(cd) << "*i";
    return 0;
}
