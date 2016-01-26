#include "IntergerToRoman.h"


void IntergerToRoman::Process()
{
	cout << intToRoman(3999) << endl;
	cout << intToRoman(1) << endl;
	cout << intToRoman(3) << endl;
	cout << intToRoman(31) << endl;
}
string IntergerToRoman::intToRoman(int num)
{
	if (num < 0 || num>3999)return"";
	string charset = "IVXLCDM";//1 5 10 50 100 500 1000
	
	string result(""); int digit_count = 0;
	while (num != 0)
	{
		result = IntergerToRoman_OneNumber(num, charset.substr(digit_count)) + result;
		digit_count += 2;
		num /= 10;
	}
	return result;
}
string IntergerToRoman::IntergerToRoman_OneNumber(int& num, string& charset)
{
	string result("");
	switch (num % 10)
	{
	case 0:break;
	case 1:result += charset[0];break;
	case 2:result += charset[0]; result += charset[0]; break;
	case 3:result += charset[0]; result += charset[0]; result += charset[0]; break;
	case 4:result += charset[0]; result += charset[1]; break;
	case 5:result += charset[1];break;
	case 6:result += charset[1]; result += charset[0]; break;
	case 7:result += charset[1]; result += charset[0]; result += charset[0]; break;
	case 8:result += charset[1]; result += charset[0]; result += charset[0]; result += charset[0]; break;
	case 9:result += charset[0]; result += charset[2]; break;
	}
	return result;
}