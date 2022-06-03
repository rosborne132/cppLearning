#include <iostream>

using namespace std;

class Car {
// Making variables private to follow the idea of encapulation.
// Users should not update fields manually. They should use methods instead.
// Use private when you have variables that only this class to use
private: 
    string Color;
    double Price;

// Use protected when you have variables that only this class and
// other classes that inherit the base class to use.
protected: 
    bool IsBroken;
    string Name;


public:
    // Constructor. It has to have the same name as the class.
    Car(string name, string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
    }

    void getInfo() {
        cout << "Name: " << Name << endl;
        cout << "Color: " << Color << endl;
        cout << "Price: " << Price << "$" << endl;
    }

    void crashCar() {
        cout << Name << " crashed" << endl;

        IsBroken = true;
    }

    void repairCar() {
        cout << Name << " repaired" << endl;

        IsBroken = false;
    }

    void move() {
        IsBroken
            ? cout << Name << " is broken" << endl
            : cout << Name << " is driving" << endl;
    }
};

// Example of inheritance. 
// FlyingCar will inherit all public methods of the base class Car.
class FlyingCar : public Car {
public:
    // Use values from the user to fill out the required values of the Car class.
    FlyingCar(string name, string color, double price): Car(name, color, price) {}

    void move() {
        IsBroken
            ? cout << Name << " is broken" << endl
            : cout << Name << " is flying" << endl;
    }
};

// Example of polymorphism
class UnderwaterCar : public Car {
public:
    // Use values from the user to fill out the required values of the Car class.
    UnderwaterCar(string name, string color, double price) : Car(name, color, price) {}

    void move() {
        IsBroken
            ? cout << Name << " is broken" << endl
            : cout << Name << " is diving" << endl;
    }
};

int main() {
    // Creates an instance of the Car object
    Car hyundai("Hyundai", "Grey", 50000);
    Car toyota("Toyoda", "Red", 60000);

    hyundai.move();         // Hyundai is driving
    hyundai.crashCar();     // Hyundai crashed
    hyundai.move();         // Hyundai is broken
    hyundai.repairCar();    // Hyundai is repaired
    hyundai.move();         // Hyundai is driving


    FlyingCar flyingCar("Columbia", "White", 900000);
    flyingCar.getInfo();
    flyingCar.move();       // Columbia is flying

    UnderwaterCar underwaterCar("Sub Car", "Black", 800000);
    underwaterCar.getInfo();
    underwaterCar.move();   // Sub Car is diving


    // Example of pointers and classes
    Car* carOne = &flyingCar;
    Car* carTwo = &underwaterCar;

    // The -> syntax is used with calling methods from a pointer.
    carOne->crashCar();         // Columbia crashed
    carTwo->crashCar();         // Sub Car crashed

    underwaterCar.move();       // Sub Car is broken
}
