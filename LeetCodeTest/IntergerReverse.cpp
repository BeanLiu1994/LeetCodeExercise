#include "IntergerReverse.h"
void IntergerReverse::Process()
{
	cout << reverse(12333) << endl;
	cout << reverse(-12333) << endl;
	cout << reverse(INT32_MIN) << endl;
	cout << reverse(INT32_MAX) << endl;
}
int IntergerReverse::reverse(int x)
{
	//Range in INT32_MAX and INT32_MIN 
	int symbol = x > 0 ? 1 : -1;
	long long temp = (long long)x * symbol;
	long long result = 0;
	while (temp != 0)
	{
		result *= 10;
		result += temp%10;
		temp = temp / 10;
	}
	result *= symbol;
	if (result<INT32_MIN || result>INT32_MAX)
		return 0;
	else
		return (int)result;
}