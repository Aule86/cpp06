#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
    *this = copy;
    return ;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
    (void)other;
    return(*this);
}

bool PseudoNb(const std::string str) 
{
	if (str == "nanf" || str == "-inff" || str == "+inff" || str == "nan" || str == "-inf" || str == "+inf" || str == "inf")
		return true;
	return false;
}

void ScalarConverter::toChar(std::string input)
{

}
void ScalarConverter::toInt(std::string input)
{

}
void	ScalarConverter::toFloat(std::string input)
{

}
void	ScalarConverter::toDouble(std::string input)
{

}

ScalarConverter::~ScalarConverter()
{
    
}