#include <iostream>
using namespace std;
int main()
{
	float score;
	cout << "������ѧ���ĳɼ���";
	cin >> score;
	if (score >= 90)
		cout << "�ɼ��ȼ�ΪA";
	else if (score >= 80)
		cout << "�ɼ��ȼ�ΪB";
	else if (score >= 70)
		cout << "�ɼ��ȼ�ΪC";
	else if (score >= 60)
		cout << "�ɼ��ȼ�ΪD";
	else 
		cout << "�ɼ��ȼ�ΪE";
	return 0;
}
