#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string sortVowels(string s) {
    vector<int> vowelIndices;
    vector<char> vowels;
    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelIndices.push_back(i);
            vowels.push_back(s[i]);
        }
    }
    sort(vowels.begin(), vowels.end());


    for (int i = 0; i < vowelIndices.size(); i++) {
        s[vowelIndices[i]] = vowels[i];
    }

    return s;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = sortVowels(s);
    cout << "Result: " << result << endl;

    return 0;
}