//#include<iostream>
//using namespace std;
//template <typename T >
//int linearsearch(T arr[], T value, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (arr[i] == value)
//		{
//			return 1;
//		}
//	}
//	return -1;
//}
//template <typename T>
//void printsearchresult(int index, T key)
//{
//	if (index != -1)
//	{
//		cout << "Element " << key << " found at index " << index << "." << endl;
//	}
//	else 
//	{
//		cout << "Element " << key << "  not found in the array " << index << "." << endl;
//	}
//}
//int main() {
//	// Test with an integer array of size 5
//	int intArray[5] = { 64, 25, 12, 22, 11 };
//	int intKey = 12;
//	int intIndex = linearsearch(intArray, intKey, 5);
//	printsearchresult(intIndex, intKey);
//
//	// Test with a float array of size 4
//	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
//	float floatKey = 1.62;
//	int floatIndex = linearsearcher(floatArray, floatKey , 4);
//	printsearchresult(floatIndex, floatKey);
//
//	// Test with a string array of size 4
//	string stringArray[4] = { "apple", "orange", "banana", "grape" };
//	string stringKey = "banana";
//	int stringIndex = linearsearcher(stringArray, stringKey);
//	printsearchresult(stringIndex, stringKey);
//
//	return 0;
//}
//
