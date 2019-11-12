#include<iostream>
using namespace std;
int main7() {
	int arr[5] = { 300,350,300,400,250 };
	int min=arr[0];
	int minPig = 0;
	for (int i = 0; i < 4; i++)
	{
		if (min>arr[i+1]) {
			min = arr[i+1];
			minPig = i + 1;
		}
	}
	cout << "第" << minPig+1 << "头猪最轻,体重为：" << min << endl;
	//逆置数组
	int len = 5;
	for (int i = 0; i < len/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}