#include <iostream>
using namespace std;

void print(const int array[], int size);
int* applyAll(int array1[], int size1, int array2[], int size2);

int main()
{
	const size_t array1_size{5};
	const size_t array2_size{3};

	int array1[] {1, 2, 3, 4, 5};
	int array2[] {10, 20 ,30};

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int *results = applyAll(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{array1_size * array2_size};

	cout << "Result: ";
	print(results, results_size);

	delete [] results;
	cout << endl;

	cout << "====================" << endl;

	const size_t array3_size{3};
	const size_t array4_size{4};

	int array3[] {3, 6, 9};
	int array4[] {1, 2, 3, 4};

	cout << "Array 3: ";
	print(array3, array3_size);

	cout << "Array 4: ";
	print(array4, array4_size);

	int *products = applyAll(array3, array3_size, array4, array4_size);
	constexpr size_t products_size{array3_size * array4_size};

	cout << "Result: ";
	print(products, products_size);

	delete [] products;
	cout << endl;


	return 0;
}

void print (const int array[], int size)
{
	for (size_t i {0}; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int* applyAll(int array1[], int size1, int array2[], int size2)
{
	int max, min;
	int *ptr {nullptr};
	ptr = new int [size1 * size2];
	int length = 0;

	if (size1 > size2)
	{
		max = size1;
		min = size2;
		for (int i = 0; i < min; i++)
		{
			for (int j = 0; j < max; j++)
			{
				ptr[length] = array2[i] * array1[j];
				length++;
			}
		}
	}
	else
	{
		max = size2;
		min = size1;
		for (int i = 0; i < min; i++)
		{
			for (int j = 0; j < max; j++)
			{
				ptr[length] = array1[i] * array2[j];
				length++;
			}
		}
	 

	
/*	int nums[size1 * size2] {0};
	int length {0};

	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			nums[length] += array2[i] * array1[j];
		}
	}
	ptr = nums;
*/
	return ptr;
}
