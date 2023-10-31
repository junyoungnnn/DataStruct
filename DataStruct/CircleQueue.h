#pragma once
#include <iostream>
#define SIZE 4

using namespace std;

template <typename T>
class CircleQueue
{
private:
	int arr[SIZE] = { NULL };
	int front;
	int rear;
	int size;
	T data;

public:
	CircleQueue()
	{
		front = 0;
		rear = 0;
		size = 0;
	}

	void EnQueue(T data)
	{
		if (IsFull())
		{
		}
		else
		{
			arr[rear] = data;
			rear = (rear + 1) % SIZE;
		}
	}

	void DeQueue()
	{
		if (Empty())
		{
		}
		else
		{
			arr[front] = NULL;
			front = (front + 1) % SIZE;
		}
	}

	bool IsFull()
	{
		if ((front + 1) % SIZE == rear % SIZE)
		{
			cout << "큐가 가득 찼습니다" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	bool Empty()
	{
		if (front == rear)
		{
			cout << "큐가 비었습니다" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	T& Front()
	{
		return arr[(front + 1) % SIZE];
	}

	T& Back()
	{
		return arr[rear];
	}

	//
	void Show()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << endl;
		}
	}
	~CircleQueue() {}
};

