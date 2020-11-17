#include "SortingAlgoritms.h"
#include <iostream>

using namespace std;

int InsertionSort(int* mas, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int key = i + 1;//move on to the next element
		int temp = mas[key];//save second element
		for (int j = i + 1; j > 0; j--)
		{
			if (temp < mas[j - 1])//if the second is less than the first
			{
				mas[j] = mas[j - 1];//swap this elements
				key = j - 1;
			}
		}
		mas[key] = temp;
	}
	return 0;

}

int BinarySearch(int* mas , int key, int size)
{
	InsertionSort(mas, size);
	int left = 0, right = size, mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;//finding the middle element in an array
		if (key < mas[mid]) right = mid - 1;// if the required element is less than the value in the cell, then shift the right border
		else if (key > mas[mid]) left = mid + 1;// if the required element is bigger than the value in the cell, then shift the left border
		else return mid;// else the values are equal
	}
	if (left > right)//if borders are closed
		return -1;
}

int QuickSort(int* mas, int left, int right)
{
	int mid, count, first=left, last=right;
	
	mid = mas[(first + last) / 2]; //pivot compitation
	do
	{
		while (mas[first] < mid) first++;//elements smaller than pivot are placed to the left
		while (mas[last] > mid) last--;//elements bigger than pivot are placed to the right
		if (first <= last) //rearrangement of elements
		{
			count = mas[first];
			mas[first] = mas[last];
			mas[last] = count;
			first++;
			last--;
		}
	} while (first < last);
	if (left < last) QuickSort(mas, left, last);//repeat sorting for the left subarray
	if (first < right) QuickSort(mas, first, right);//repeat sorting for the right subarray
	return 0;
}

int BogoSort(int* mas, int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size-1; i++)
		{
			if (mas[i] > mas[i + 1])//if the first elemens is greater than the second, then swap them
			{
				int temp = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = temp;
			}
		}
	}
	return 0;
}

char CountingSort(char* mas, int size)
{
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < size; i++) //finding maximum end minimum value in an array
	{
		if (mas[i] > max)
			max = mas[i];//maximum
		if (mas[i] < min)
			min = mas[i];//minimum
	}
	int* masTwo = new int[max + 1 - min];//create an auxiliary array
	for (int i = 0; i < max + 1 - min; i++) //fill the array with zeros
	{
		masTwo[i] = 0;
	}
	for (int i = 0; i < size; i++) //keep the number of occurrences of different elements in the auxiliary array
	{
		masTwo[mas[i] - min] ++;
	}
	int i = 0;
	for (int j = min; j < max + 1; j++) //fill in the original array
	{
		while (masTwo[j - min] != 0) 
		{
			mas[i] = j;
			masTwo[j - min]--;
			i++;
		}
	}
	return 0;
}






