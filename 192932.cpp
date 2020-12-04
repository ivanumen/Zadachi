#include <iostream>
#include <vector>
#include <string>

using namespace std;

string searchWord(string& inWord, const string& outWord) {
    vector <int> in(1000);
    for (int i = 0; i < inWord.size(); i++) {
        ++in[inWord[i]];
    }
    for (int i = 0; i < outWord.size(); i++) {
        --in[outWord[i]];
        if (in[outWord[i]] < 0) {
            return "No";
        }
    }
    return "Ok";
}

int main()
{
    string inWord, outWord;
    getline(cin, inWord);
    getline(cin, outWord);
    cout << searchWord(inWord, outWord);
    return 0;
}

