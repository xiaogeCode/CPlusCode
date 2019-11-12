#include<iostream>
using namespace std;
int main2() {
	int a = 568;
	int b = 65;
	int c = 0;
	c = a > b ? a : b;
	cout << "c: " << c << endl;
	//三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;//将100赋值给最大的数
	cout << "a: " << a <<"  b: "<<b<< endl;

	string array1[] = { "aa", "df"};
	int array2[2] = { 0, 1 };
	int array3[10];
	for (string str : array1) {
		cout<<str<<endl;
	}
	cout <<"整个数组长度: "<< sizeof(array2) <<" 单个元素 "<<sizeof(array2[1])<< endl;
	cout << "数组首地址" << array2 << endl;
	cout << "数组中第一个元素地址" << &array2[0] << endl;
	return 0;
}