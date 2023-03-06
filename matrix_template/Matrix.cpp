#include<iostream>
#include "Matrix.h"

template<typename T>
int Matrix<T>::getMatrixSize(const Matrix& a) const {
	int sizeMatrix{ 0 };
	for (int i{}; i < a.getSize(); ++i) {
		for (int j{}; j < a.getSize(); ++j) {
			sizeMatrix += a.getEllement(i, j);
		}
	}
	return sizeMatrix;
}

template<typename T>
int Matrix<T>::getSize() const { return size; }

template<typename T>
T Matrix<T>::getEllement(int i, int j) const { return arr[i][j]; }

template<typename T>
void Matrix<T>::set(int i, int j, T val) { arr[i][j] = val; }

template<typename T>
void Matrix<T>::show() {
	for (int i{}; i < Matrix::INIT_SIZE; ++i) {
		for (int j{}; j < Matrix::INIT_SIZE; ++j) {
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
	std::cout << "\n\n";
}