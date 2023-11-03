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
		if (IsFull())
		{
			cout << "Heap is Full" << endl;
			return;
		}
		arr[index] = data;
		HeapSort(index);
		index++;
	}

	bool IsFull()
	{
		if (index >= SIZE)
		{
			return true;
		}
		else
		{
			return false;
		}
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

	T Delete()
	{
		if (index <= 0) // Heap이 비어있는 경우
		{
			cout << "Heap is Empty" << endl;
			return -1;
		}

		T maxValue = arr[1];

		arr[1] = arr[index];
		arr[index] = NULL;
		index--;

		int parent = 1;
		while (parent <= index)
		{
			if (arr[parent * 2] > arr[parent * 2 + 1])
			{
				swap(arr[parent], arr[parent * 2]);
				parent = parent * 2;
			}
			else if(arr[parent * 2] < arr[parent * 2 + 1])
			{
				swap(arr[parent], arr[parent * 2 + 1]);
				parent = parent * 2 + 1;
			}
			else
			{
				break;
			}
		}
		return maxValue;
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