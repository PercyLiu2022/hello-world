#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������߳�ֵ��"; 
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c >a)
	    cout << "�ܹ���������";
	else
	    cout << "���ܹ���������";	
	return 0;	 
 } 
