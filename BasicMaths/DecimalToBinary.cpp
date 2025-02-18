#include <iostream>
using namespace std;
// 23
void decimalToBinary(int num) {
    if (num == 0) {    
        cout << "0";     
        return;
    }

    string binary = "";    // 
    while (num > 0) {      // 
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    cout << "Binary: " << binary << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary representation: ";
    decimalToBinary(decimal);

    return 0;
}
