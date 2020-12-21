#include<iostream>
using namespace std;
void JieMian()
{
	cout << "***********" << "刘东升的秘籍" << "***********\n";
	cout << "\n" << "\n" << "\n";
	cout << "   #########" << "独家密文" << "#########\n";
}
int MiMao(int id, int pw)
{
	id -= pw;
	return id;
}
int main()
{
	JieMian();
	int id1, pw1;
	cout << "账号: ";
	cin >> id1;
	cout << "密码: ";
	cin >> pw1;
	if (MiMao(id1, 123456789) == 0 && MiMao(pw1, 123456789) == 0)
	{
		cout << "欢迎登录";
	}
	else
	{
		cout << "密码或者账号出错";
	}
}

