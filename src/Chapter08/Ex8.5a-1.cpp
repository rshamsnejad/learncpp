#include <iostream>
#include <cstdint>

class RGBA
{
	using number_t = uint_fast8_t;
private:
	number_t m_red;
	number_t m_green;
	number_t m_blue;
	number_t m_alpha;
public:
	RGBA
	(
		number_t red = 0,
		number_t green = 0,
		number_t blue = 0,
		number_t alpha = 255
	) :
		m_red{ red },
		m_green{ green },
		m_blue{ blue },
		m_alpha{ alpha }
	{
	}
	
	void print(void)
	{
		std::cout <<
			"r=" << static_cast<int>(m_red) << " " <<
			"g=" << static_cast<int>(m_green) << " " <<
			"b=" << static_cast<int>(m_blue) << " " <<
			"a=" << static_cast<int>(m_alpha)
		<< std::endl;
	}
};

int main(void)
{
	RGBA teal{ 0, 127, 127 };
	teal.print();
	
	return EXIT_SUCCESS;
}
