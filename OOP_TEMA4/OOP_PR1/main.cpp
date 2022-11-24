#include <iostream>
#include <string>
#include<list>
using namespace std;
class Person {
private:
    int age;
    string name;
public:
    Person(int age, string name) {
        this->age = age;
        this->name = name;
    }
    void setAge(int n) {
        this->age = n;
    }
    int getAge() {
        return this->age;
    }
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};
class GroupOfFriends {
private:
    list<Person*> friendsList;
public:
    void addFriend(Person* addFr) {
        this->friendsList.push_back(addFr);
    }
    list<Person*> getFriendsList() {
        return this->friendsList;
    }
    void afisare() {
        for (Person * person : this->friendsList) {
            cout << person->getName() <<" " << person->getAge() << endl;
        }
    }
    void schimbare(string nume) {
        int nr;
        cin >> nr;
        for (Person* person : this->friendsList) {
            if (person->getName() == nume)
                person->setAge(nr);
        }
    }
    void stergere(string nume) {

        for (Person* person : this->friendsList) {
            if (person->getName() == nume)
                friendsList.remove(person);
        }
    }
};
int main(){
    GroupOfFriends* friendsGroup;
    friendsGroup = new GroupOfFriends();
    friendsGroup->addFriend(new Person(19,"Andrei"));
    friendsGroup->addFriend(new Person(18,"Maria"));
    friendsGroup->addFriend(new Person(22,"Alex"));
    friendsGroup->addFriend(new Person(20, "George"));

    friendsGroup->afisare();
    string nume;
    cin >> nume;
    friendsGroup->schimbare(nume);
    friendsGroup->afisare();
    cin >> nume;
    friendsGroup->stergere(nume);
    return 0;
}
