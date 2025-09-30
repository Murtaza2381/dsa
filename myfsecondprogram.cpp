#include<iostream>
using namespace std;
template <typename T>

void printarray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

template <typename T>
void selectionsort(T arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int smallestindex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[smallestindex])
			{
				smallestindex = j;
			}
		}
		swap(arr[i], arr[smallestindex]);
	}
 }
int main() 
{
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printarray(intArray, 5);
	selectionsort(intArray, 5);
	cout << "Sorted integer array: ";
	printarray(intArray, 5);

	return 0;
}