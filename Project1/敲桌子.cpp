#include<iostream>
using namespace std;
int main8() {
	for (int i = 1; i < 100; i++)
	{
		int a1 = i % 10;//个位
		int a2 = i / 10;//十位
		int a3 = i % 7;//被7整除=0
		if ((a1==7) || (a2 == 7) || (a3==0)) {
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	return 0;
}