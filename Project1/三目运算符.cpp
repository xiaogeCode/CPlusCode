#include<iostream>
using namespace std;
int main2() {
	int a = 568;
	int b = 65;
	int c = 0;
	c = a > b ? a : b;
	cout << "c: " << c << endl;
	//��Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;//��100��ֵ��������
	cout << "a: " << a <<"  b: "<<b<< endl;

	string array1[] = { "aa", "df"};
	int array2[2] = { 0, 1 };
	int array3[10];
	for (string str : array1) {
		cout<<str<<endl;
	}
	cout <<"�������鳤��: "<< sizeof(array2) <<" ����Ԫ�� "<<sizeof(array2[1])<< endl;
	cout << "�����׵�ַ" << array2 << endl;
	cout << "�����е�һ��Ԫ�ص�ַ" << &array2[0] << endl;
	return 0;
}