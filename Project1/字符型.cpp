#include<iostream>
using namespace std;
int main5() {
	//转义字符
	//换行符   \n
	cout << "good" << "\n";
	//反斜杠	\\
	//水平制表符	\t

	cout << "\\" << "\n";
	cout << "go\thahah" << "\n";
	cout << "godf\thahah" << "\n";
	cout << "gosfeeff\thahah" << "\n";
	char ch = 'A';
	cout << ch << "字节: " << sizeof(ch) << ":" << (char)97 << "zz" << endl;


	char str1[] = "中国";
	string str2 = "全收集";
	cout << str2 << endl;

	bool flag = true;
	cout << flag << "  : " << sizeof(flag) << endl;

	int b = 0;
	float c = 1.2f;
	char d = 'a';
	string e = "dd";
	bool a = 0;
	cout << "赋值：" << endl;
	//cin >> a;
	cout << "变量为：" << a << endl;

	int score = 0;
	while (score < 999)
	{
		cout << "输入一个分数： " << endl;
		cin >> score;
		if (score > 750)
		{
			cout << "error input" << endl;
		}
		else if(score>600)
		{
			if (score>700)
			{
				cout << "congratulation 清华北大欢迎你" << endl;
			}
			else
			{
				cout << "congratulation 1本大学欢迎你" << endl;
			}
			
		}else if(score>500)
		{
			cout << "congratulation 2本大学欢迎你" << endl;
			
		}else if(score>400)
		{
			cout << "congratulation 3本大学欢迎你" << endl;
			
		}
		else {
			cout << "waht a pity,you fail " << endl;
		}
	}





	return 0;
}