#include<iostream>
#include<ctime>
using namespace std;
int main4() {
	//srand(time_t());//���������
	srand((unsigned int)time(NULL));//���������
	int ran = rand() % 100+1; //1-100
	int count = 0;
	int inputNum;
	while (true)
	{
		count++;
		cout << "������µ����֣� ";
		cin >> inputNum;
		if (inputNum > ran)
		{
			cout << "too big" << endl;
		}
		else if (inputNum < ran)
		{
			cout << "too small" << endl;

		}
		else
		{
			cout << "well done ! "<<"�ܹ�����"<<count<<"��" << endl;
			break;

		}

	}

	return 0;
}