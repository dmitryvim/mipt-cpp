#include <iostream>

using namespace std;

int main() {
    char line[100];

    cout << "I will read your string untill meet next line, maximum 99 symbols" << endl;
    cin.getline(line, 99);
    cout << line << endl;

    cout << "I will read your string untill meet space." << endl;
    cin >> line;
    cout << line << endl;

    cout << "lets change every letter to the next" << endl;
    for (int i = 0; line[i] != 0; i++) {
        if (isalpha(line[i])) {
            line[i]++;
        }
    }
    cout << "look at new line:\n" << line << endl;

    return 0;
}