#pragma once
#include <iostream>
#define SIZE 5
using namespace std;

template <typename T>
class STACK
{
private:
	int top;
	T buffer[SIZE];

public:
	STACK()
	{
		top = -1;
	}

	void Push(T data)
	{
		if (IsFull())
		{
			cout << "Stack Overflow" << endl;
		}
		else 
		{
			buffer[++top] = data;
		}
	}

	void Pop()
	{
		if (Empty())
		{
			cout << "Stack is Empty" << endl;
		}
		else
		{
			top--;
		}
	}

	bool Empty()
	{
		if (top <= -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool IsFull()
	{
		if (top >= SIZE - 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int Size()
	{
		return top + 1;
	}

	T& Top()
	{
		return buffer[top];
	}

	~STACK() {}
};
