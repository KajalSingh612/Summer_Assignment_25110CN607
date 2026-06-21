//wap to check anagram strings
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2))
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}