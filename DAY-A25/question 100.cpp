//  sort words by length
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int totalWords;

    cout << "Enter number of words: ";
    cin >> totalWords;

    vector<string> words(totalWords);

    cout << "Enter words:";
    for (int i = 0; i < totalWords; i++)
        cin >> words[i];

    sort(words.begin(), words.end(),
         [](string first, string second) {
             return first.length() < second.length();
         });

    cout << "Words sorted by length:";
    for (string word : words)
        cout << word << " ";

    return 0;
}