#include <iostream>

using namespace std;


// Method created to showcase basic input and output of floating numbers
void calcSalary() {
    float annualSalary;

    cout << "Please enter your annual salary ";

    cin >> annualSalary; // Take in user input and assign it to variable

    float monthlySalary = annualSalary / 12;

    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10;
}

// Method created to show common data types as well as the
// size of those data types.
void commonDataTypes() {
    int yearOfBirth = 1995;
    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 12342345234562345;

    // sizeof shows you the size of a value in bytes.
    cout << "Size of int is " << sizeof(int) << " bytes\n";

    // -1, -2, -3, ..., -2147483648
    cout << "Int min value is " << INT_MIN << endl;

    // 0, +1, +2, +3, ..., 2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;

    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

}

// Method create to show the common datatype overflow issue. Method doesn't
// break the program, but more of a showcase for a gotcha when it comes to data types.
void overflowExample() {
    int intMax = INT_MAX;
    cout << intMax << endl;

    // Datatype overflow. Once the max int is reached to then
    // starts at the lowest var.
    cout << intMax + 1; // -2147483648
}

int main() {
    cout << "Starting Program!\n"; // console.log statement

//    calcSalary();
//    commonDataTypes();
//    overflowExample();
}
