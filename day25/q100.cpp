//wap to sort words by length
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

bool compareLength(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    vector<string> words;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compareLength);

    cout << "Words sorted by length:\n";
    for (string w : words) {
        cout << w << " ";
    }

    return 0;
}