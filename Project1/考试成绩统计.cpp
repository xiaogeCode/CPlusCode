#include<iostream>
using namespace std;
int main9() {
	string name[] = { "����","����","����" };
	int score[][3] = {
		{100,100,100},
		{90, 50, 100},
		{60, 70, 80}
	};
	for (int i = 0; i < 3; i++)
	{
		int sco = 0;
		for (int j = 0; j < 3; j++)
		{
			sco += score[i][j];
		}
		cout << name[i] << " scpre: " << sco << endl;
	}
	return 0;
}