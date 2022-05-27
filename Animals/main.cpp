#include <iostream>

using namespace std;

class Animal {
public:
    string name;

    virtual void say()=0;
    virtual void sayName()=0;
};

class Dog : public Animal {
public:
    Dog(string name){
        this->name = name;
    }

    void sayName() override {
        cout << name << endl;
    }

    void say() override {
        cout << "Gav!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string name){
        this->name = name;
    }

    void sayName() override {
        cout << name << endl;
    }


    void say() override {
        cout << "Meow!" << endl;
    }
};

class Frog : public Animal {
public:
    Frog(string name){
        this->name = name;
    }

    void sayName() override {
        cout << name << endl;
    }

    void say() override {
        cout << "Kwaa!" << endl;
    }
};

class Lion : public Animal {
public:
    Lion(string name){
        this->name = name;
    }

    void sayName() override {
        cout << name << endl;
    }

    void say() override {
        cout << "BIGMEOW!" << endl;
    }
};

int main() {

    Animal *animals[4] = {new Dog("Bob"),
                          new Cat("Murka"),
                          new Frog("Vasya"),
                          new Lion("King")};
    for(int k=0; k<4; k++) {
        animals[k]->sayName();
        animals[k]->say();
    }

    return 0;
}
