/*
sD 10/14/24
abstractAnimalClass.cpp
*/

#include <iostream>

class Animal {
public:
    virtual void needsFluShot(int age) const = 0;
};

class Dog : public Animal {
public:
    void needsFluShot(int age) const override {
        if (age > 10) {
            std::cout << "Animal needs a flu shot." << '\n';
        } else {
            std::cout << "Animal does not need flu shot." << '\n';
        }
    }
};

class Cat : public Animal {
public:
    void needsFluShot(int age) const override {
        if (age > 10) {
            std::cout << "Animal needs a flu shot." << '\n';
        } else {
            std::cout << "Animal does not need flu shot." << '\n';
        }
    }
};

int main() {
    Dog dog1;
    Cat cat1;

    dog1.needsFluShot(12);
    cat1.needsFluShot(5);

    return 0;
}