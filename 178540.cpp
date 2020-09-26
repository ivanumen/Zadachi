#include <iostream>
#include <vector>
#include <algorithm>

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
	void createZeroVectorVector(vector <vector <T> >& in, const int rows, const int cols) {
		in.resize(rows);
		for (auto& v : in) {
			v.resize(cols);
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

vector <vector <int> > createReverseSpiralVectorVector(vector <vector <int> >& in, int rows, int cols) {
	int size = rows * cols;
	int elem = 1;
	int i, j, horizontal;
	horizontal = 0;
	int sizeRows = rows - 1;
	int sizeCows = cols - 1;
	while (elem < size) {
		for (j = horizontal; j < sizeCows; j++) {
			if (in[sizeRows][j] == 0) {
				in[sizeRows][j] = elem;
				++elem;
			}
		}
		for (i = sizeRows; i > horizontal; i--) {
			if (in[i][sizeCows] == 0) {
				in[i][sizeCows] = elem;
				++elem;
			}
			
		}
		for (j = sizeCows; j > horizontal; j--) {
			if (in[horizontal][j] == 0) {
				in[horizontal][j] = elem;
				++elem;
			}
		}
		for (i = horizontal; i < sizeRows; i++) {
			if (in[i][horizontal] == 0) {
				in[i][horizontal] = elem;
				++elem;
			}
		}
		++horizontal;
		--sizeCows;
		--sizeRows;
	}
	if (rows == cols && rows % 2 == 1) {
		in[rows / 2][cols / 2] = rows * cols;
	}
	return in;
}

int main()
{
	int rows, cols;
	cin >> rows >> cols;
	vector <vector <int> > in;
	NArray::createZeroVectorVector(in, rows, cols);
	createReverseSpiralVectorVector(in, rows, cols);
	NArray::writeVectorVector(in);
	return 0;
}

