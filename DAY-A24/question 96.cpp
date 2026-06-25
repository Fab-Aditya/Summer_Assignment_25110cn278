// WAP to remove duplicate characters
#include <iostream>
#include <string>
using namespace std;
int main() {
    string text, answer = "";

    cout << "Enter string: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        bool present = false;

        for (int j = 0; j < answer.length(); j++) {
            if (text[i] == answer[j]) {
                present = true;
                break;
            }
        }

        if (!present) {
            answer += text[i];
        }
    }

    cout << "After removing duplicates: " << answer;

    return 0;
}