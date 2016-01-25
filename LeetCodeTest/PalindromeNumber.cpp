#include "PalindromeNumber.h"

bool isp(int x)
{
	if (x < 0)return false;
	stringstream tt;
	string t;
	tt << x;
	tt >> t;
	for (int i = 0, j; i < t.length(); ++i)
	{
		j = t.length() - 1 - i;
		if (j <= i)
			break;
		if (t[i] != t[j])
			return false;
	}
	return true;
}
bool isp2(int x)
{
	if (x < 0)return false;
	vector<char> separated; separated.reserve(10);
	while (x != 0)
	{
		separated.push_back(x % 10);
		x = x / 10;
	}
	for (int i = 0, j; i < separated.size(); ++i)
	{
		j = separated.size() - 1 - i;
		if (j <= i)
			break;
		if (separated[i] != separated[j])
			return false;
	}
	return true;
}
bool isp3(int x)
{
	if (x < 0)return false;
	char separated[20]; char separated_count = 0;
	while (x != 0)
	{
		separated[separated_count++] = (x % 10);
		x = x / 10;
	}
	for (int i = 0, j; i < separated_count; ++i)
	{
		j = separated_count - 1 - i;
		if (j <= i)
			break;
		if (separated[i] != separated[j])
			return false;
	}
	return true;
}



void PalindromeNumber::Process()
{
	cout << isPalindrome(1233321) << endl;
	cout << isPalindrome(-1233321) << endl;
	cout << isPalindrome(2313) << endl;
	cout << isPalindrome(123344121) << endl;
}
bool PalindromeNumber::isPalindrome(int x)
{
	//return isp(x);
	//return isp2(x);
	return isp3(x);
}
