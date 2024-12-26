//�̴ϰ���2
#include <iostream>
using namespace std;

// �⺻ Ŭ����: Animal
class Animal {
public:
    // ���� �Լ�: �ڽ� Ŭ�������� ������ ����
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

// �Ļ� Ŭ����: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// �Ļ� Ŭ����: Cat
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
    // Animal Ÿ�� �����ͷ� �پ��� ��ü�� ����Ŵ
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;
    Cow myCow;

    // Dog ��ü ����Ű��
    myAnimal = &myDog;
    myAnimal->makeSound();  // Dog�� makeSound() ȣ��

    // Cat ��ü ����Ű��
    myAnimal = &myCat;
    myAnimal->makeSound();  // Cat�� makeSound() ȣ��

    myAnimal = &myCow;
    myAnimal->makeSound();  // Cat�� makeSound() ȣ��

    return 0;
}
