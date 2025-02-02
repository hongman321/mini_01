//미니과제2
#include <iostream>
using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    // 가상 함수: 자식 클래스에서 재정의 가능
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "Cow meows: Moo! Moo!" << endl;
    }
};

int main() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;
    Cow myCow;

    // Dog 객체 가리키기
    myAnimal = &myDog;
    myAnimal->makeSound();  // Dog의 makeSound() 호출

    // Cat 객체 가리키기
    myAnimal = &myCat;
    myAnimal->makeSound();  // Cat의 makeSound() 호출

    myAnimal = &myCow;
    myAnimal->makeSound();  // Cat의 makeSound() 호출
    //이건 newtest확인용이에요 이게 왜 안되는거지?
    return 0;
}
