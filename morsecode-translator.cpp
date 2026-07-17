#include <iostream>
#include <map>
#include <cctype>
#include <string>

using namespace std;

int main() {
    map<char, string> morse = {
        {'A', ".-"},    {'B', "-..."},  {'C', "-.-."},
        {'D', "-.."},   {'E', "."},     {'F', "..-."},
        {'G', "--."},   {'H', "...."},  {'I', ".."},
        {'J', ".---"},  {'K', "-.-"},   {'L', ".-.."},
        {'M', "--"},    {'N', "-."},    {'O', "---"},
        {'P', ".--."},  {'Q', "--.-"},  {'R', ".-."},
        {'S', "..."},   {'T', "-"},     {'U', "..-"},
        {'V', "...-"},  {'W', ".--"},   {'X', "-..-"},
        {'Y', "-.--"},  {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
        {'3', "...--"}, {'4', "....-"}, {'5', "....."},
        {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
        {'9', "----."}
    };

    string text;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Morse Code: ";

    for (char ch : text) {
        if (ch == ' ')
            cout << "/ ";
        else
            cout << morse[toupper(ch)] << " ";
    }

    return 0;
}