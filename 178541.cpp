#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

namespace NArray {
	template <class T>
	void createZeroMatrix(vector <vector <T> >& in, const int rows) {
		in.resize(rows);
		for (auto& v : in) {
			v.resize(rows);
			for (auto& elem : v) {
				elem = 0;
			}
		}
	}

	template <class T>
	void readVector(vector <T>& in) {
		int number;
		cin >> number;
		in.resize(number);
		for (auto& elem : in) {
			cin >> elem;
		}
	}

	template <class T>
	void readVectorUntilEOF(vector <T>& in) {
		T x;
		while (cin >> x) {
			in.push_back(x);
		}
	}

	template <class T>
	void writeVector(const vector <T>& out) {
		for (const auto& elem : out) {
			cout << elem << " ";
		}
	}

	template <class T>
	void readVectorVector(vector <vector <T> >& in) {
		int rows, cols;
		cin >> rows >> cols;
		in.resize(rows);
		for (auto& v : in) {
			v.resize(cols);
			for (auto& elem : v) {
				cin >> elem;
			}
		}
	}

	template <class T>
	void writeVectorVector(const vector <vector <T> >& out) {
		for (const auto& v : out) {
			for (const auto& elem : v) {
				cout << elem << " ";
			}
			cout << endl;
		}
	}

	template <class T>
	vector <int> intToVector(T number) {
		vector <T> decomposition;
		int secondNumber;
		while (number > 0) {
			secondNumber = number % 10;
			number /= 10;
			decomposition.push_back(secondNumber);
		}
		reverse(decomposition.begin(), decomposition.end());
		return decomposition;
	}

	template <class T>
	T sumVector(const vector <T>& in) {
		T ans = 0;
		for (const auto elem : in) {
			ans += elem;

		}
		return ans;
	}

	template <class T>
	T multVector(const vector <T>& in) {
		T ans = 1;
		for (const auto elem : in) {
			ans *= elem;
			if (elem == 0) {
				break;
			}
		}
		return ans;
	}

	template <class T>
	T maxElemVector(const vector <T>& in) {
		return *max_element(in.begin(), in.end());
	}

	template <class T>
	T minElemVector(const vector <T>& in) {
		return *min_element(in.begin(), in.end());
	}

	template <class T>
	vector <int> fromDecimalToBinary(T number) {
		vector <int> binari;
		int binariNumber;
		while (number > 0) {
			binariNumber = number % 2;
			number /= 2;
			binari.push_back(binariNumber);
		}
		return binari;
	}

	template <class T>
	int countMaxElemInVector(const vector <T>& in) {
		int count = 0;
		for (auto& elem : in) {
			if (elem == maxElemVector(in)) {
				++count;
			}
		}
		return count;
	}
}

namespace NMath {
	template <class T>
	T  Pow(const T number, const int rank) {
		T elem = 1;
		for (int i = 0; i < rank; i++) {
			elem *= number;
		}
		return elem;
	}

	template <class T>
	T factorial(const T number) {
		int elem = 1;
		for (int i = 1; i <= number; i++) {
			elem *= i;
		}
		return elem;
	}
}

void creatSumPow(vector <int>& arraySumPow, const int number) {
	int prevElem;
	int nextElem;
	int prevPow;
	int nextPow;
	set <int> addedNumbers;
	int added;
	for (prevElem = 1; prevElem <= number; prevElem++) {
		prevPow = NMath::Pow(prevElem, 2);
		if (prevPow > number) {
			break;
		}
		for (nextElem = prevElem + 1; nextElem <= number; nextElem++) {
			nextPow = NMath::Pow(nextElem, 2);
			added = prevPow + nextPow;
			if (added > number) {
				break;
			}
			if (addedNumbers.find(added) == addedNumbers.end()) {
				addedNumbers.insert(added);
				arraySumPow.push_back(added);
			}
		}
	}
}

int main()
{
	vector <int> arraySumPow;
	int number;
	cin >> number;
	creatSumPow(arraySumPow, number);
	sort(arraySumPow.begin(), arraySumPow.end());
	NArray::writeVector(arraySumPow);
	return 0;
}

