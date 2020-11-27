#include <iostream>

class Ball
{
private:
	std::string m_color;
	float m_radius;
public:
	Ball(float radius)
	{
		m_color = "black";
		m_radius = radius;
	}
	Ball(std::string color = "black", float radius = 10.0)
	{
		m_color = color;
		m_radius = radius;
	}
	void print(void)
	{
		std::cout << m_color << " " << m_radius << std::endl;
	}
};

int main(void)
{
	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return EXIT_SUCCESS;
}
