#include<iostream>
using namespace std;
int main6() {
	int i = 100;
	while (i<1000)
	{
		int a1 = i % 10;//��λ
		int a2 = (i / 10 )% 10;//ʮλ
		int a3 = i / 100;//��λ
		if ((a1*a1*a1+a2*a2*a2+a3*a3*a3 )== i)
		{
			cout << "ˮ���� �� " <<i<< endl;
		}
		i++;
	}
	
	return 0;
}