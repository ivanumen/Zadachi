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

	void readGraf(vector <vector <pair<int, int> > >& graf, const int countVertexes, const int countEdges) {
		graf.resize(countVertexes);
		int from, to, weigh;
		for (int i = 0; i < countEdges; i++) {
			cin >> from >> to >> weigh;
			graf[from - 1].push_back(make_pair(to - 1, weigh));
		}
	}

	template <class T>
	vector <int> intToVector(T number) {
		vector <int> decomposition;
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

	template <class T>
	void descendingSort(vector <T>& in) {
		T elem;
		for (int i = 0; i < in.size(); i++) {
			for (int j = i; j < in.size(); j++) {
				if (in[i] < in[j]) {
					elem = in[i];
					in[i] = in[j];
					in[j] = elem;
				}
			}
		}
	}
}

int DeicstraForFullGraph(vector <vector <pair<int, int> > >& graph, const int countVertexes, const int countEdges, const int startVertexe, const int endVertex) {
	vector <int> distance(countVertexes, 1e9);
	distance[startVertexe - 1] = 0;
	vector <bool> used(countVertexes, false);
	for (int i = 0; i < countVertexes; i++) {
		int iMin = -1;
		for (int i = 0; i < distance.size(); i++) {
			if (!used[i] && (iMin == -1 || distance[i] < distance[iMin])) {
				iMin = i;
			}
		}
		used[iMin] = true;
		for (auto p : graph[iMin]) {
			int to = p.first;
			int weigh = p.second;
			if (distance[to] > distance[iMin] + weigh) {
				distance[to] = distance[iMin] + weigh;
			}
		}
	}
	return distance[endVertex - 1];
}
