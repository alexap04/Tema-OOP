#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person{
    string name;
    int age;
};

bool comparatie(Person A, Person B) {
    return A.age > B.age;
}

int main(){
    vector<Person> persoana;
    persoana.push_back({ "Bogdan", 21});
    persoana.push_back({ "Maria", 17});
    persoana.push_back({ "Alex", 19});
    persoana.push_back({ "Cristina", 33});

    sort(persoana.begin(), persoana.end(), comparatie);
    for (auto i= persoana.begin(); i != persoana.end(); i++)
    {
        cout<<(*i).name<<" "<<(*i).age<<endl;
    }
    return 0;
}
