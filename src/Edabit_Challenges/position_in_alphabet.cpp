#include <iostream>
#include <iomanip>

using namespace std;

class Letter
{
private:
	int m_number;
	char m_lowercase;
	char m_uppercase;
public:
	void setNumber(int number)
	{
		m_number = number;
		m_lowercase = (char)(m_number + 96);
		m_uppercase = (char)(m_number + 64);
	}

	int getNumber()	{ return m_number; }
	char getLowercase() { return m_lowercase; }
	char getUppercase() {	return m_uppercase; }
};

int main(void)
{
	int number{0};
	Letter letter;

	cout << "Enter a number between 1 and 26 : ";
	cin >> number;

	if(number < 1 || number > 26)
	{
		cerr << "Error : the number is not in range [1-26]" << endl;
		exit(EXIT_FAILURE);
	}
	
	letter.setNumber(number);
	
	cout << "Number is : " << letter.getNumber() << endl;
	cout <<
		"Associated letters are : " << letter.getLowercase() << 
		" and " << letter.getUppercase()
	<< endl;

	cout << endl << "Entire alphabet :" << endl;

	for(int i{1} ; i <= 26 ; i++)
	{
		letter.setNumber(i);
		cout <<
			setfill(' ') << setw(2) << letter.getNumber()
			<< " : " <<
			letter.getLowercase() << ", " <<
			letter.getUppercase()
		<< endl;
	}

	return EXIT_SUCCESS;
}
