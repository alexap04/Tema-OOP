#include <iostream>
#include <cstring>

using namespace std;
int getSize(int a)
{
    return sizeof(a);
}
int getSize(double a)
{
    return sizeof(a);
}
int getSize(char* a)
{
    int length= strlen(a);
    return length;
}
int main()
{
int ovLoad=5;
double ovLoadDouble=100.56;
char ovLoadString[] = "stringexample";

cout<<getSize(ovLoad)<<endl;
cout<<getSize(ovLoadDouble)<<endl;
cout<<getSize(ovLoadString);

return 0;
    cout << "Hello world!" << endl;
    return 0;
}
