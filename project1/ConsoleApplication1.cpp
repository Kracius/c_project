#include <iostream>

using namespace std;

double sum(double num1, double num2, char operation) {

    if (operation == '/' && num2 == 0) return 0;

    switch (operation) {
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/': return num1 / num2;
    default: return -1;
    }
}

int main() {
    setlocale(0, "");
    cout << "[+] первое число: ";
    int num1;
    cin >> num1;

    cout << "[+] второе число: ";
    int num2;
    cin >> num2;

    cout << "[+] действие: ";
    int operation;
    cin >> operation;

    cout << "[+] Результат: " << sum(num1, num2, operation) << endl;

    int _; cin >> _;
    return 0;
}