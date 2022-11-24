#include <iostream>
#include <cmath>
using namespace std;
struct nrComplex
{
    double real, imaginar;
};
double Modulus(const nrComplex& num)
{
    return sqrt(pow(num.real, 2) + pow(num.imaginar, 2));
}

double Modulus(const double& real, const double& imaginar)
{
    return sqrt(pow(real, 2) + pow(imaginar, 2));
}

int main()
{
    nrComplex numarComplex{ 9.6,11.2 };
    double complexReal = 9.6, complexImaginar = 11.2;
    cout<< Modulus(numarComplex)<<endl<<Modulus(complexReal, complexImaginar)<<endl;
    return 0;
}
