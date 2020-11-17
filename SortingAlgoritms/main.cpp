#include "SortingAlgoritms.h"
#include <iostream>
#define size 10
using namespace std;
const char Arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main()
{
	setlocale(LC_ALL, "ru");
	int* A = new int[size];
	//char* A = new char[size];
	int left = 0, right = size - 1, key;
	cout << "Source array: ";
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 50;
		cout << A[i] << " ";
	}
	QuickSort(A, left, right);
	//sertionSort(A, size); //вызов функции
	//BogoSort(A, size);
	//CountingSort(A, size);
	cout << endl << "Binary Search: " << endl;
	for (int i = 0; i < size; i++) cout << A[i] << " ";
	cout << "Source element: "; cin >> key; //ввод ключа
	if (BinarySearch(A, key, size) == -1) cout << "\nElement not found";
	else cout << "\nElement number is: " << BinarySearch(A, key, size) + 1;
	delete[] A;
	return 0;
}