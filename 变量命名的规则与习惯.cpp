#include <iostream>
using namespace std;
int main()
{
	double rate, pound, kg; 
	rate = 0.4535924;
	cout << "请输入想转换成千克数的磅数："; 
	cin >> pound;
	kg = rate * pound; 
	cout << "转换后的千克数：" << kg;
	return 0;
 } 
