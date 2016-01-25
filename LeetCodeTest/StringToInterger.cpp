#include "StringToInterger.h"



void StringToInterger::Process()
{
	cout << myAtoi("12345") << endl;
	cout << myAtoi("    - 321") << endl;
	cout << myAtoi("-12345") << endl;
	cout << myAtoi("      +12345") << endl;
	cout << myAtoi("9223372036854775809") << endl;
	cout << myAtoi("12345&*$*&($*#&$") << endl;
}
int StringToInterger::myAtoi(string str) 
{
	long long result = 0;
	symbol *thissymbol = NULL;
	bool num_start = false;
	//Ê®½øÖÆ
	
	for (string::iterator str_iter = str.begin(); str_iter != str.end(); ++str_iter)
	{
		char current = *str_iter;
		if (current == ' ')
		{
			if (num_start == true)
				break;
			else
				continue;
		}
		if (current >= '0'&&current <= '9'|| current == '-' || current == '+')
		{
			num_start = true;
			if (current == '-' || current == '+')
			{
				if (thissymbol == NULL)
				{
					thissymbol = new symbol(current); continue;
				}
				else
					return 0;
			}
			result *= 10;
			result += current - '0';
			if (thissymbol == NULL)
			{
				if (result >= INT32_MAX)
					return INT32_MAX;
			}
			else
			{
				if (result*thissymbol->symbol_ind >= INT32_MAX)
					return INT32_MAX;
				if (result*thissymbol->symbol_ind <= INT32_MIN)
					return INT32_MIN;
			}
		}
		else if (num_start = true)break;
	}
	return result_after_check(thissymbol,result);
}
int StringToInterger::result_after_check(symbol* sp, long long result)
{
	if (sp == NULL)
		sp = new symbol('+');
	result *= sp->symbol_ind;
	delete sp;

	if (result<INT32_MIN || result>INT32_MAX)
		return result<0 ? INT32_MIN : INT32_MAX;
	else
		return (int)result;
}