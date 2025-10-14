#include<iostream>
using namespace std;
template <typename T , size_t  N>
void selectionsort(T(&A)[N])
{
	for (size_t i = 0; i < N - 1; i++)
	{
		size_t smallsub = i;

		for (size_t j =  i + 1; j < N; j++)
		{
			if (A[j] < A[smallsub])
			{
				smallsub = j;
			}
		}
		T temp = A[i];
		A[i] = A[smallsub];
		A[smallsub] = temp;
	}
}
template <typename T , size_t N>
void printarray(const T(&A)[N])
{
	for (size_t i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
int main() {

	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printarray(intArray);
	selectionsort(intArray);
	cout << "Sorted integer array: ";
	printarray(intArray);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printarray(stringArray);
	selectionsort(stringArray);
	cout << "Sorted string array: ";
	printarray(stringArray);

	return 0;
}
