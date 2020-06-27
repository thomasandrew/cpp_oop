#include <iostream>
#include <string>
using namespace std;

// constructor
class Person {
  private:
    int num1;
    int num2;
    string name;

  public:
    Person(int numO, int numT, string nam) {
    num1 = numO;
    num2 = numT;
    name = nam;
  } 
  
  // Getters
  int getNum1() {
    return num1;
  }

  int getNum2() {
    return num2;
  }

  string getName() {
    return name;
  }
};

// Inheritence
class Vehicle {
  
  private:
    string drive = "Ferrari";
    int number = 10;

  public:
    void something() {
      cout << "................................" << endl;
      cout << drive << endl;
      cout << number << endl;
      cout << "................................" << endl;
    }
};

class Car: public Vehicle {
  private:
   double number_two;   
};

// Polymorphism
class Animal {
  public: 
    void animalSound() {
      cout << "No sound" << endl;
  }
};

class Pig: public Animal {
  public:
    void animalSound() {
      cout << "Oink Oink" << endl;
    }
};

class Cow: public Animal {
  public:
    void animalSound() {
      cout << "Muu Muu" << endl;
    }
};

class No: public Animal {

};


int main() {

  // Constructor
  Person p1(1, 2, "Thomas");
  cout << p1.getNum1() << endl;
  cout << p1.getNum2() << endl;
  cout << p1.getName() << endl;

  // Inheritence
  Car car;
  car.something();

  // Polymorphism
  Animal animal;
  Pig pig;
  Cow cow;
  No no;

  animal.animalSound();
  pig.animalSound();
  cow.animalSound();
  no.animalSound();
}
