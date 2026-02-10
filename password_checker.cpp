#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    cout << "Enter a password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = true;
        else if (password[i] >= 'a' && password[i] <= 'z')
            hasLower = true;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = true;
        else
            hasSymbol = true;
    }

    int score = hasUpper + hasLower + hasDigit + hasSymbol;

    if (password.length() < 6)
        cout << "Weak password should be longer.\n";
    else if (score <= 2)
        cout << "Medium password.You can add uppercase letters, symbols or numbers.\n";
    else
        cout << "Strong password!!\n";

    return 0;
}
