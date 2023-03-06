#pragma once

template<class T>
class Matrix
{
private:
	const static int INIT_SIZE{ 5 };

	int size{ 0 };
	T** arr{ nullptr };

public:
	Matrix() :
		size{ Matrix::INIT_SIZE },
		arr{ new T * [Matrix::INIT_SIZE] }
	{
		for (int i{}; i < Matrix::INIT_SIZE; ++i)
			arr[i] = new T[Matrix::INIT_SIZE]{};
	}

	Matrix(const Matrix& obj) :
		size{ obj.size },
		arr{ new T * [obj.size] }
	{
		for (int i{}; i < this->size; ++i) {
			arr[i] = new T[this->size];
			for (int j{}; j < this->size; ++j) {
				arr[i][j] = obj.arr[i][j];
			}
		}
	}

	int getMatrixSize(const Matrix& a) const;

	int getSize() const;

	T getEllement(int i, int j) const;

	void set(int i, int j, T val);

	void show();

	~Matrix() {
		if (arr != nullptr) {
			for (int i{}; i < Matrix::INIT_SIZE; ++i) {
				if (arr[i] != nullptr)
					delete[] arr[i];
			}

			delete[] arr;
		}
	}
};
