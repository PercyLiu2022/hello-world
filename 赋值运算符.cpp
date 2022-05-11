#include <iostream>
using namespace std;
int main()
{
	int money, cost;
	cout << "请输入班费的总金额：";
	cin >> money;
	cost = 15;
	money /= cost; 
	cout << "可以买" << money << "桶水";
	return 0; 
} 
