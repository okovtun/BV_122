#include<iostream>
using namespace std;

#define CONST_1 1
#define CONST_2 2
#define CONST_N 'N'

void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;//„исла, вводимые с клавиатуры
	char s;	//Sign - знак операции
	cout << "¬ведите арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	/*if (s == '+')
		cout << a << " + " << b << " = " << a + b << endl;
	else if (s == '-')
		cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*')
		cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/')
		cout << a << " / " << b << " = " << a / b << endl;
	else
		cout << "Error: NoOperation" << endl;*/

	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: NoOperation" << endl;
	}
	main();
	while (Condition)
	{
		group - of - statements;
	}
	true;
#ifdef SWITCH_SYNTAX
	int var = 0;




	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		.............;
		.............;
	case CONST_N: codeN; break;
	default: code;
	}
#endif // SWITCH_SYNTAX
}