#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三个边长值："; 
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c >a)
	    cout << "能构成三角形";
	else
	    cout << "不能构成三角形";	
	return 0;	 
 } 
