#include <iostream>

using namespace std;
double axb(double& a,  double& b){
    try{
        if (a == 0.0)
            throw "Nu se poate imparti la 0!";
            return -b/a;
            }
    catch (char* exception){
          cout << exception;
          exit(EXIT_FAILURE);
    }
}
int main()
{
    double a = 4.0, b = 8.0;
    cout <<axb(a, b);
    return 0;
}
