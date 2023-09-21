#include <iostream>
#include <string>
#include <regex>

using namespace std;

int checkPassword(const string& password) {
    int ruleViolations = 0;

    // Rule 1: Password length should be between 6 and 22 characters
    if (password.length() < 6 || password.length() > 22) {
        ruleViolations++;
    }

    // Rule 2: At least one uppercase character
    bool hasUppercase = false;
    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
            break;
        }
    }
    if (!hasUppercase) {
        ruleViolations++;
    }

    // Rule 3: At least one lowercase character
    bool hasLowercase = false;
    for (char c : password) {
        if (islower(c)) {
            hasLowercase = true;
            break;
        }
    }
    if (!hasLowercase) {
        ruleViolations++;
    }

    // Rule 4: At least two special characters (you can define the set of special characters)
    int specialCharCount = 0;
    string specialCharacters = "@#$%"; // Add your desired special characters here
    for (char c : password) {
        if (specialCharacters.find(c) != string::npos) {
            specialCharCount++;
        }
    }
    if (specialCharCount < 2) {
        ruleViolations++;
    }

    // Rule 5: At least one numeric digit
    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        ruleViolations++;
    }

    // Rule 6: No two characters should appear consecutively
    if (regex_search(password, regex("(.)\\1"))) {
        ruleViolations++;
    }

    return ruleViolations;
}

int main() {
    string password1 = "abcd";
    string password2 = "Abc@12#";

    int result1 = checkPassword(password1);
    int result2 = checkPassword(password2);

    cout << "Input: " << password1 << endl;
    cout << "Output: " << result1 << endl;

    cout << "Input: " << password2 << endl;
    cout << "Output: " << result2 << endl;

    return 0;
}
