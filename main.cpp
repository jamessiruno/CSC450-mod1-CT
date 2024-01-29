#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store user input
    string firstName, lastName, streetAddress, city, zipCode;

    // Get user input
    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    cout << "Enter Street Address: ";
    getline(cin, streetAddress);

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter Zip Code: ";
    getline(cin, zipCode);

    // Print fictional person information
    cout << "\nFictional Person Information:\n";
    cout << "-----------------------------\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
