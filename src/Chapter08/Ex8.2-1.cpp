#include <iostream>

class IntPair
{
public:
	int m_int1;
	int m_int2;
	
	void set(int int1, int int2)
	{
		m_int1 = int1;
		m_int2 = int2;
	}
	void print(void)
	{
		std::cout <<
			"Pair(" << m_int1 << ", " << m_int2 << ")"
		<< std::endl;
	}
};

int main(void)
{
	IntPair p1;
	p1.set(1, 1);
	IntPair p2{2, 2};

	p1.print();
	p2.print();
	
	return EXIT_SUCCESS;
}
