#include "StringToIntergerTry2.h"



void StringToIntergerTry2::Process()
{
	cout << myAtoi("12345") << endl;
	cout << myAtoi("    - 321") << endl;
	cout << myAtoi("    -+1") << endl;
	cout << myAtoi("-12345") << endl;
	cout << myAtoi("      +12345") << endl;
	cout << myAtoi("9223372036854775809") << endl;
	cout << myAtoi("12345&*$*&($*#&$") << endl;
}
int StringToIntergerTry2::myAtoi(string str)
{
	for (int i = 0; i < str.length(); ++i)
	{
		char current = str[i];
		if (current == ' ')continue;
		else if (current <= '9'&&current >= '0' || current == '-' || current == '+')
			return SolveByCore(str.substr(i,str.length()-i));
		else return 0;
	}
	return 0;
}
int StringToIntergerTry2::SolveByCore(string str)
{
	long long result = 0;
	int symbol = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		char current = str[i];
		if (current <= '9'&&current >= '0')
		{
			if (symbol == 0)symbol = 1;
			result *= 10;
			result += current - '0';
			long long temp_result = result * symbol;
			if (temp_result <=INT32_MIN || temp_result >=INT32_MAX)
				return temp_result<0 ? INT32_MIN : INT32_MAX;
		}
		else if(current == '-' || current == '+')
		{
			if (symbol != 0)return 0;
			else symbol = current == '-' ? -1 : 1;
		}
		else break;
	}
	return (int)(result*symbol);
}
