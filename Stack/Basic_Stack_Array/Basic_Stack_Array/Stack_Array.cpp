#include <iostream>
#include "Stack.h"
using namespace std;

void main()
{
	Stack* stack=new Stack();

	while (1)
	{
		cout << "1.push" << endl;
		cout << "2.pop" << endl;
		cout << "3.peek" << endl;
		cout << "4.size" << endl;

		int number = 0;
		cin >> number;
		switch (number)
		{
		case 1:
			cout << endl;
			cout << "input:";
			cin >> number;
			stack->push(number);
			break;
		case 2:
			stack->pop();
			break;
		case 3:
			cout << "Peek number" << stack->peek() << endl;
			break;
		case 4:
			cout << "Size:" << stack->size() << endl;
		
			break;
		default:
			break;
		}
		stack->print_stack();
		system("pause");
		
	}
}