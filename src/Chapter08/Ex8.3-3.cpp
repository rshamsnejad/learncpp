#include <iostream>
#include <cassert>
#define MAX_SIZE 10

class Stack
{
	int m_stack[MAX_SIZE]{};
	int m_size{};
public:
	void reset(void)
	{
		m_size = 0;
	}
	bool push(int value)
	{
		if(m_size >= MAX_SIZE)
			return false;
		else
		{
			m_stack[m_size] = value;
			m_size++;
			return true;
		}
	}
	int pop(void)
	{
		assert(m_size > 0);
		m_size--;
		int value = m_stack[m_size];
		return value;
	}
	void print(void)
	{
		std::cout << "( ";
		for(int i = 0 ; i < m_size ; i++)
		{
			std::cout << m_stack[i] << " ";
		}
		std::cout << ")" << std::endl;
	}
};

int main(void)
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return EXIT_SUCCESS;
}
