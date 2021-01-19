#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

unordered_map<char, size_t> toMap(string& length) {
    unordered_map<char, size_t> m;
    for (const auto& elem : length) {
        m[elem]++;
    }
    return m;
}

void permutation(string& length1,string& length2, string& permutationLength) {
    auto m1 = toMap(length1);
    auto m2 = toMap(length2);
    for (char i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < min(m1[i], m2[i]); j++) {
            permutationLength += i;
       }
    }

}

int main()
{
    string length1, length2, anslength;
    while (getline(cin, length1)) {
        getline(cin, length2);
        permutation(length1, length2, anslength);
        cout << anslength << endl;
        anslength = "";
    }
    return 0;
}


