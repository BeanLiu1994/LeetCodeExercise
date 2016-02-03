#include "Solution.h"
#include "TestSeg.h"
#include "ImplementstrStr.h"
//测试方式:将代码直接放进来
class ConCreteTestSeg :public TestSeg
{
private:
#pragma region [Content of test.cpp]
//=============================== File Start ===============================
#include "Solution.h"

	int getPeachNumber(int n)
	{
		if (n == 10)
		{
			return 1;
		}
		else
		{
			int num = (getPeachNumber(n + 1) + 1) * 2;
			cout << "第" << n << "天所剩桃子" << num << "个" << endl;
			return num;
		}
	}
	int main()
	{
		int num = getPeachNumber(1);
		cout << "猴子第一天摘了:" << num << "个桃子。" << endl;
		return 0;
	}
//================================ File End ================================
#pragma endregion
};
//另一种测试方式:直接include文件,但是对应文件需要设置为"从生成中排除"
class ConCreteTestSeg2 :public TestSeg
{
private:
#pragma region [Content of test.cpp]
//=============================== File Start ===============================
#include "test.cpp"
//================================ File End ================================
#pragma endregion
};
int main(int argc, char* argv[])
{
	TestCasesManager myMG(true);
	vector<Solution*> myTestSet;

	myTestSet.push_back(new ImplementstrStr());
	myTestSet.push_back(new ConCreteTestSeg());
	myTestSet.push_back(new ConCreteTestSeg2());

	myMG.Add(myTestSet);
	myMG.RunAllSeg();

	getchar();
	return 0;
}