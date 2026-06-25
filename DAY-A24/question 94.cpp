// WAP to compress a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, result = "";

    cout << "Enter string: ";
    getline(cin, text);

    int count = 1;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == text[i + 1]) {
            count++;
        }
        else {
            result += text[i];
            result += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << result;

    return 0;
}