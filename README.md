# LeetCodeExercise
## 程序结构：
	class Solution 为基础类,含有成员 virtual void Process();
	每道题对应一个由Solution继承来的类,此时的Process()填入相应的testcase
	调用时可以只修改main函数内的类名来运行不同的题目.
## Structure:
  There is a class named "Solution", in which there is a member defined as following:
      virtual void Process();
  For a specific problem on leetcode, a class extends from "Solution" is created to solve it.
  
  In the main() function
    A reference of class "Solution" is assigned to a specific solution of one problem on leetcode.
