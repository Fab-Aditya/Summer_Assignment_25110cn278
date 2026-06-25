// sort names alphabetically
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int totalNames;

    cout << "Enter number of names: ";
    cin >> totalNames;

    vector<string> names(totalNames);

    cout << "Enter names:";
    for (int i = 0; i < totalNames; i++)
        cin >> names[i];

    sort(names.begin(), names.end());

    cout << "Names in alphabetical order:";
    for (string name : names)
        cout << name << endl;

    return 0;
}