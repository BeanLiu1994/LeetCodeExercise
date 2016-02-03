#pragma once
#include "Solution.h"
#include <assert.h>
#include <conio.h>
//#include <windows.h>
//设置参数
#define TESTSEG_ARGC 1
#define TESTSEG_ARGV { "this_program" }

class TestSeg :public Solution
{
public:
	virtual void Process()
	{
		char* argv[] = TESTSEG_ARGV;
		assert(this->main((TESTSEG_ARGC), argv) == 0);
	}
	//继承时使用下面两种里的一个
private:
	virtual int main(int argc, char* argv[])
	{
		return this->main();
	}
	virtual int main()
	{
		return 0;
	}
};

class TestCasesManager
{
private:
	vector<Solution*> TestSegContainer;
	bool DeleteContainerMemory;
public:
	TestCasesManager(bool _DeleteContainerMemory = false) :DeleteContainerMemory(_DeleteContainerMemory) {}
	~TestCasesManager()
	{
		if (DeleteContainerMemory)
			for (auto& iter : TestSegContainer)
			{
				delete iter;
			}
	}
	int SegAmount()
	{
		return TestSegContainer.size();
	}
	int Add(vector<Solution*>& unitSet)
	{
		for (auto& iter : unitSet)
		{
			this->Add(iter);
		}
		return 0;
	}
	int Add(Solution* unit)
	{
		for (auto& iter : TestSegContainer)
		{
			if (iter == unit)return 1;
		}
		TestSegContainer.push_back(unit);
		return 0;
	}
	int Delete(Solution* unit)
	{
		for (vector<Solution*>::iterator iter = TestSegContainer.begin(); iter != TestSegContainer.end(); ++iter)
		{
			if (*iter == unit)
			{
				TestSegContainer.erase(iter);
				return 0;
			}
		}
		return 1;
	}
	int RunAllSeg()
	{
		size_t sizeOfContainer = TestSegContainer.size();
		for (size_t i = 0; i < sizeOfContainer; ++i)
		{
			if (RunSegAt(i))
			{
				cout << "info: Index of this Seg in Container is : " << i << endl;
			}
			if (i < sizeOfContainer - 1)
				intervalBehavior();
		}
		return 0;
	}
	void intervalBehavior()
	{
		cout << "Press Any Key..." << endl;
		_getch();
		cout << endl;
		//Sleep(200);
		//getchar();
	}
	int RunSegAt(int index)
	{
		try {
			cout << "[=  Running Test: " << TestSegContainer[index]->GetName() << " =]" << endl;
			TestSegContainer[index]->Process();
			cout << "[=  END =]" << endl;
			return 0;
		}
		catch (exception e) { cout << e.what() << endl; return 1; }
	}
};