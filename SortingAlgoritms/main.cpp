#include "SortingAlgoritms.h"
#include <iostream>
#include <time.h> 
#define size 100

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
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	int start_time = clock();
	//QuickSort(A, left, right);
	InsertionSort(A, size);
	//BogoSort(A, size);
	//CountingSort(A, size);
	unsigned long long int end_time = clock();
	cout << endl << "Insertion Sort: " << endl;
	for (int i = 0; i < size; i++) cout << A[i] << " ";
	cout << "Execution time of a piece of program: " << end_time - start_time << " milliseconds\n";
	//cout << "Source element: "; cin >> key; 
	//if (BinarySearch(A, key, size) == -1) cout << "\nElement not found";
	//else cout << "\nElement number is: " << BinarySearch(A, key, size) + 1;
	delete[] A;
	return 0;
}