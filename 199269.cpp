#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(const vector <int>& in, const int heinght, const int need) {
    int count = 0;
    for (auto number : in) {
        count += number / heinght;
    }
    return count >= need;

}

template <class T>
void readVector(vector <T>& in, const int number) {
    in.resize(number);
    for (auto& elem : in) {
        cin >> elem;
    }
}

int binarySearch(const vector <int>& in, const int need) {
    int left = 1;
    int right = 1000000000;
    int ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (check(in, mid, need)) {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int number, need;
    vector <int> in;
    cin >> number >> need;
    readVector(in, number);
    cout << binarySearch(in, need);
    return 0;
}

