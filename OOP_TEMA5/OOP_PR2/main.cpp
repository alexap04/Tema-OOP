#include <iostream>

using namespace std;

class Formular {
    protected:
    string name;
    public:

    Formular(){
        cout << "Formular creat!" << endl;
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }

    ~Formular(){
        cout << "Formular distrus!" <<endl;
    }
};
class Dreptunghi:public Formular {
    protected:
    int width;
    int height;
    public:

    Dreptunghi(){
        cout << "Dreptunghi creat!" <<endl;
    }

    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }

    ~Dreptunghi(){
        cout << "Dreptunghi distrus!" <<endl;
    }
};
int main()
{
    Formular f;
    Dreptunghi r;

    return 0;
}
