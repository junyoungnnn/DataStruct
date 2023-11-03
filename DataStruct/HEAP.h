#pragma once
#include <iostream>
#define SIZE 10
template<typename T>
class HEAP
{
private:
	T data;
	T arr[SIZE] = { NULL };
	int index = 1;
public:
	void Insert(T data)
	{
		arr[index] = data;

		HeapSort(index);

		index++;
	}

	void HeapSort(int index)
	{
		if (index == 1)
		{
			return;
		}

		if (arr[index] > arr[index / 2])
		{
			swap(arr[index], arr[index / 2]);
			HeapSort(index / 2);
			
		}
		else
		{
			return;
		}
	}

	void Display()
	{
		for (int i = 1; i < index; i++)
		{
			cout << arr[i] << " ";
		}
		return;
	}
};