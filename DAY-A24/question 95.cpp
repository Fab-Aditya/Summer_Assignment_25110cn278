// WAP to find longest word
#include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence, word = "", longest = "";

    cout << "Enter sentence: ";
    getline(cin, sentence);

    sentence += ' ';

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        }
        else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    cout << "Longest word: " << longest;

    return 0;
}