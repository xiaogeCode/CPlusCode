#include<iostream>
using namespace std;
int main3() {
	int pig1, pig2, pig3;
	while (true)
	{
		cout << "��������ֻС������� " << endl;
		cin >> pig1 >> pig2 >> pig3;
		if (pig1 > pig2)
		{
			if (pig1 > pig3) {
				cout << "pig1 ���أ�" << pig1 << endl;
			}
			else
			{

			}
		}
		else
		{
			if (pig2 > pig3)
			{
				cout << "pig2 ���أ�" << pig2 << endl;
			}
			else
			{
				cout << "pig3 ���أ�" << pig3 << endl;
			}
		}
	}
	return 0;
}