#include<iostream>
using namespace std;
int main8() {
	for (int i = 1; i < 100; i++)
	{
		int a1 = i % 10;//��λ
		int a2 = i / 10;//ʮλ
		int a3 = i % 7;//��7����=0
		if ((a1==7) || (a2 == 7) || (a3==0)) {
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	return 0;
}