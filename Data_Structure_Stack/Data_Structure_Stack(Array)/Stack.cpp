#include "Stack.h"
#include <iostream>
Stack::Stack():top(-1)
{
	data = new int[maxsize];
}

Stack::~Stack()
{
	delete[] data;
}

void Stack::initialize()
{
	top = -1;
}

bool Stack::is_full()
{
	if (top == maxsize - 1)
	{
		std::cout << "Stack is full!!" << std::endl;
		return true;
	}
	return false;
}

bool Stack::is_empty()
{
	if (top == -1)
	{
		std::cout << "Stack is Empty!!" << std::endl;
		return true;
	}
	return false;
}

int Stack::size()
{
	return top+1;
}

void Stack::push(int Number)
{
	if (is_full())
		return;
	data[++top] = Number;
}

int Stack::peek()
{
	if (is_empty())
	{
		return -1;
	}
	return data[top];
}

int Stack::pop()
{
	if (is_empty())
		return -1;

	top -= 1;

	return 0;
}

void Stack::print_stack()
{
	system("cls");
	if (is_empty())
		return;
	std::cout << "==========================" << std::endl;
	for (int i = top; i >= 0; --i)
	{
		std::cout << "[Idx " << i << "] : " << data[i] << std::endl;
	}
	std::cout << "==========================" << std::endl;

}
