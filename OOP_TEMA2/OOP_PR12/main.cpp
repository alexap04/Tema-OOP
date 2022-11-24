#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
};

struct Cat{
    string name;
    int age;
    Person* master;
};

struct Car{
    string producer, licenseNumber;
    int age;
};

template<typename A, typename B>
int varstaMin(A first, B second){
    return min(first.age, second.age);
}

template<typename A, typename B>
bool varstaEgala(A first, B second){
   if(first.age==second.age)
        return 1;
   return 0;
}
int main(){
    Person person{ "Alexa", 7 };
    Cat cat{ "Edgar", 4, &person };
    Car car{ "Opel", "DJ50NLA", 4 };

    cout<<varstaMin(person, cat)<<endl;
    cout<<varstaEgala(cat, car);
}
