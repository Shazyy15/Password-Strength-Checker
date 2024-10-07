#include <iostream>
#include <string>
using namespace std;

// ANSI color codes (may not work on all systems, such as some Windows terminals)
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string CYAN = "\033[36m";

// Function to check if a character is a special character
bool isSpecialCharacter(char c) {
    string specialCharacters = "!@#$%^&*()-_=+[]{}|;:',.<>?/~`";
    for (int i = 0; i < specialCharacters.length(); i++) {
        if (c == specialCharacters[i]) {
            return true;
        }
    }
    return false;
}

// Function to evaluate the password strength
string evaluatePasswordStrength(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    if (password.length() < 8) {
        return RED + "Password is too short. It should be at least 8 characters long." + RESET;
    }

    // Check each character to see which criteria it meets
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (isSpecialCharacter(c)) hasSpecial = true;
    }

    // Count the number of criteria met
    int strengthScore = hasUpper + hasLower + hasDigit + hasSpecial;

    // Provide feedback based on the strength score
    if (strengthScore == 4) {
        return GREEN + "Strong password." + RESET;
    } else if (strengthScore == 3) {
        return CYAN + "Moderate password. Consider adding more character variety." + RESET;
    } else if (strengthScore == 2) {
        return YELLOW + "Weak password. Add uppercase, lowercase, digits, and special characters." + RESET;
    } else {
        return RED + "Very weak password. It should contain a mix of uppercase, lowercase, digits, and special characters." + RESET;
    }
}

void displayUI() {
    cout << "==========================================" << endl;
    cout << "||   Shazil Shahid - Cybersecurity Enthusiast   ||" << endl;
    cout << "||       Welcome to the Password Checker       ||" << endl;
    cout << "==========================================\n" << endl;
}

int main() {
    string password;
    char choice;
    
    displayUI();  // Display the title and introduction

    do {
        cout << "\nEnter a password to evaluate its strength: ";
        getline(cin, password);

        string result = evaluatePasswordStrength(password);
        cout << "\nPassword Strength: " << result << endl;

        cout << "\nWould you like to try another password? (y/n): ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the Password Strength Checker!" << endl;
    return 0;
}

