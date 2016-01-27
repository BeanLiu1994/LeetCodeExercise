#include "RomanToInteger.h"

void RomanToInteger::Process()
{
	cout << romanToInt("XXXI") << endl;
	cout << romanToInt("MXI") << endl;
	cout << romanToInt("CDIX") << endl;
}
int RomanToInteger::romanToInt(string s)
{
	string CharConst = "IVXLCDM"; // 0--->3999 only using these words.
	int CharMeans[] = { 1, 5, 10, 50, 100, 500, 1000 };
	string CanBePlacedOnLeft = " IIXXCC";
	int CanBePlacedOnRight[] = { 3, 1, 3, 1, 3, 1, 3 };
	vector<int> InputMeaningNum;
	vector<int> InputCharIndex;
	int output = 0;;


	int Index = CharConst.find_first_of(s[0]);
	InputCharIndex.push_back(Index);
	InputMeaningNum.push_back(CharMeans[Index]);
	for (int i = 1; i < s.size(); ++i)
	{
		Index = CharConst.find_first_of(s[i]);
		InputCharIndex.push_back(Index);
		InputMeaningNum.push_back(CharMeans[Index]);
		if (InputCharIndex[i - 1] < InputCharIndex[i])
		{
			InputMeaningNum[i - 1] *= -1;
		}
		output += InputMeaningNum[i - 1];
	}
	output += InputMeaningNum[InputMeaningNum.size() - 1];
	return output;
}