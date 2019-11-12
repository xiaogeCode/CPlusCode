#include<iostream>
using namespace std;
int main3() {
	int pig1, pig2, pig3;
	while (true)
	{
		cout << "请输入三只小猪的体重 " << endl;
		cin >> pig1 >> pig2 >> pig3;
		if (pig1 > pig2)
		{
			if (pig1 > pig3) {
				cout << "pig1 最重：" << pig1 << endl;
			}
			else
			{

			}
		}
		else
		{
			if (pig2 > pig3)
			{
				cout << "pig2 最重：" << pig2 << endl;
			}
			else
			{
				cout << "pig3 最重：" << pig3 << endl;
			}
		}
	}
	return 0;
}