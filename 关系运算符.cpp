#include <iostream>
using namespace std;
int main()
{
	float score;
	cout << "请输入学生的成绩：";
	cin >> score;
	if (score >= 90)
		cout << "成绩等级为A";
	else if (score >= 80)
		cout << "成绩等级为B";
	else if (score >= 70)
		cout << "成绩等级为C";
	else if (score >= 60)
		cout << "成绩等级为D";
	else 
		cout << "成绩等级为E";
	return 0;
}
