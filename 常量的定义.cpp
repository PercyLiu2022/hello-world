#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.1415926535898;
	double r1, r2, s_area, b_area, area;
	cout << "请输入小圆的半径：";
	cin >> r1;
	cout << "请输入大圆的半径：";
	cin >> r2;
	s_area = pi * r1 * r1;
	b_area = pi * r2 * r2;
	area = b_area - s_area;
	cout << "圆环的面积：" << area;
	return 0;
}
