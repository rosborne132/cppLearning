#include <iostream>

using namespace std;

void basicASCII() {
    // These examples are that of the casting operator.
    // This forces one data type to converge with another.
    cout << (int)'a' << endl; // 97
    cout << int('a')<< endl; // 97
    cout << int('A')<< endl; // 65
}

// Method that captures the users input and translates it into ASCII.
// This method does not include characters 'Enter' or 'Space'.
void translateLettersFormUser() {
//    char c1, c2, c3, c4, c5;
//    cout << "Enter 5 letters: ";
//    cin >> c1 >> c2 >> c3 >> c4 >> c5;
//    cout << "ACSII message: " << int(c1) << " " << int(c2)
//    << " " << int(c3) << " " << int(c4) << " " << int(c5);

    string userInput;
    cout << "Enter any letters: ";
    cin >> userInput;

    int inputLength = userInput.length();

    cout << "ACSII message: \n";
    for (int index = 0; index < inputLength; index++) {
        cout << int(userInput[index]) << " ";
    }
}

int main() {
    cout << "Starting Program!\n";
    basicASCII();
    translateLettersFormUser();
}
