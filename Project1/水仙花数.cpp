#include<iostream>
using namespace std;
int main6() {
	int i = 100;
	while (i<1000)
	{
		int a1 = i % 10;//个位
		int a2 = (i / 10 )% 10;//十位
		int a3 = i / 100;//百位
		if ((a1*a1*a1+a2*a2*a2+a3*a3*a3 )== i)
		{
			cout << "水仙数 ： " <<i<< endl;
		}
		i++;
	}
	
	return 0;
}