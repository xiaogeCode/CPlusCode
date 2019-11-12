#include<iostream>
#include<ctime>
using namespace std;
int main4() {
	//srand(time_t());//随机数种子
	srand((unsigned int)time(NULL));//随机数种子
	int ran = rand() % 100+1; //1-100
	int count = 0;
	int inputNum;
	while (true)
	{
		count++;
		cout << "输入你猜的数字： ";
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
			cout << "well done ! "<<"总共猜了"<<count<<"次" << endl;
			break;

		}

	}

	return 0;
}