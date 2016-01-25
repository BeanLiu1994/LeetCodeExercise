#include "LongestPalindrome.h"
void LongestPalindrome::Process()
{
	cout << longestPalindrome("a") << endl;
}
string LongestPalindrome::longestPalindrome(string s) 
{
	if (s.length() == 1)
		return s;
	int center_index_now = 0,center_index_mode = 0;//mode = 0(even) or 1(odd) 
	int iter = 0;
	int max_length = 0, current_length = 0;
	string max_string;

	for (; center_index_now < s.length(); ++iter)
	{
		center_index_now = (iter + 1) / 2;
		center_index_mode = iter % 2;

		int left_index = center_index_now + 1 - center_index_mode, right_index = center_index_now;
		if (left_index <= 0 || right_index >= s.length() - 1)
		{
			continue;
		}

		while (s.at(left_index - 1) == s.at(right_index + 1))
		{
			--left_index; ++right_index;
			if (left_index <= 0 || right_index >= s.length() - 1)
			{
				break;
			}
		}
		current_length = right_index - left_index + 1;
		if (max_length < current_length) 
		{
			max_length = current_length; 
			max_string = s.substr(left_index, max_length);
		}
	}
	return max_string;
}