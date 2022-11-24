#include <iostream>
using namespace std;
class Driver {
    string name;
    int inmatric;
public:

    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }

    int getInmatriculare() {
        return this->inmatric;
    }
    void setInmatriculare(int inmatric) {
        this->inmatric = inmatric;
    }
};

class Car {
    int inmatric;
    Driver driver;
    int speed;
public:


    Car(string driverName,int carLicense,int speed) {
        this->driver.setName(driverName);
        this->inmatric = carLicense;
        this->speed = speed;
    }
    void setDriver(Driver driverName) {
        this->driver = driverName;
    }
    Driver getDriver() {

        return this->driver;
    }
    void setSpeed(int speed) {
        this->speed = speed;
    }
    int getCarLicense() {
        return this->inmatric;
    }
};

int main() {
    Car x("Maria",33,78);
    x.getDriver().setInmatriculare(201);
    cout << "Name: " << x.getDriver().getName() << endl;
    x.setSpeed(0);
    cout<< x.getDriver().getInmatriculare()<<endl;
    cout<<x.getCarLicense();



    return 0;
}
