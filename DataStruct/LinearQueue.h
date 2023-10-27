#pragma once
#include <iostream>
#define SIZE 5
using namespace std;



template <typename T>
class LinearQueue
{
private:
	T queue[SIZE];
	int size;
	int front;
	int rear;

public:
	LinearQueue()
	{
		front = 0;
		rear = 0;
		size = 0;
	}

	void Enqueue(T data)
	{
		if (IsFull())
		{
		}
		else
		{
			queue[rear++] = data;
			size++;
		}
	}

	void Dequeue()
	{
		queue[front++] = NULL;
		size--;
	}

	bool IsFull()
	{
		if (rear >= SIZE)
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
		if (!Empty())
		{
			return queue[front];
		}
		else
		{
			exit(1);
		}
	}

	T& Back()
	{
		if (!Empty())
		{
			return queue[rear - 1];
		}
		else
		{
			exit(1);
		}
	}

	int& Size()
	{
		return size;
	}

};

