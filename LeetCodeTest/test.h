#pragma once
#include "TestSeg.h"
//测试方式:将代码直接放进来
class ConCreteTestSeg :public TestSeg
{
private:
#pragma region [Content of test.cpp]
	//=============================== File Start ===============================
#include "Solution.h"

	/*int getPeachNumber(int n)
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
	}*/
	class aaa
	{
	public: virtual void a(float) { cout << "aaa int" << endl; }
			virtual void a(aaa*) { cout << "aaa aaa" << endl; }
	};
	class bbb :public aaa
	{
	public: void a(float) { cout << "bbb int" << endl; }
	};
	int main()
	{
		aaa *a;
		a = new aaa();
		a->a(1);
		a = new bbb();
		a->a(1);
		bbb b;
		b.a(1);
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