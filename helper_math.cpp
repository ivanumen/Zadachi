﻿#include <iostream>
#include <math.h>

using namespace std;

namespace NMath{
	template <class T>
	T  Pow(const T number, const int rank) {
		T elem = 1;
		for (int i = 0; i < rank; i++) {
			elem *= number;
		}
		return elem;
	}

	template <class T>
	T binPow(T value, int extent) {
		T res = 1;
		while (extent > 0) {
			if (extent % 2 == 1) {
				--extent;
				res *= value;
			}
			else {
				extent /= 2;
				value *= value;
			}
		}
		return res;
	}

	template <class T>
	T binMod(T value, T extent, T mod) {
		T res = 0;
		while (extent > 0) {
			if (extent % 2 == 1) {
				--extent;
				res = (res + value) % mod;
			}
			else {
				extent /= 2;
				value = (value + value) % mod;
			}
		}
		return res;
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