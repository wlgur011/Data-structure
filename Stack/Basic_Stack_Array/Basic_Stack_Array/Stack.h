#pragma once
class Stack
{
public:
	Stack();
	~Stack();
public:

	void initialize();
	bool is_full();
	bool is_empty();
	int  size();
	void push(int Number);
	int  peek();
	int  pop();

	void print_stack();
private:
	const int maxsize = 10;
	int top = 0;
	int* data;
};

