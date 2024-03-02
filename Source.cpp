#include <iostream>

double GetValue();
char GetSymbol();
void PrintValue(double x, char sym, double y);

int main()
{
	double x{ GetValue() };
	double y{ GetValue() };
	
	char sym{ GetSymbol() };
	
	PrintValue(x, sym, y);

	return 0;
}

double GetValue()
{
	std::cout << "Enter a double value: ";
	double d{};
	std::cin >> d;

	return d;
}

char GetSymbol()
{
	std::cout << "Enter operation symbol (+, -, *, /): ";
	char sym{};
	std::cin >> sym;

	return sym;
}

void PrintValue(double x, char sym, double y)
{
	std::cout << x << " " << sym << " " << y << " = ";
	if (sym == '+')
		std::cout << x + y;
	else if (sym == '-')
		std::cout << x - y;
	else if (sym == '*')
		std::cout << x * y;
	else if (sym == '/')
		std::cout << x / y;
	else
		std::cout << "ERROR";
}