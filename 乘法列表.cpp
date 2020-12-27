#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
int main()
{
	long i{ 1 }, sum1{ 1 };
	int sum{ 9};
	cout << "   |";
	for (int i{ 2 }; i <= sum; i++)
	{
		cout << setw(3) << i<<" " ;
	}
	cout << endl;
	for (int i{ 0 }; i <= sum; i++)
	{
		cout << "______";
	}
	for ( i =2; i <= sum; i++)
	{
		cout << endl;
		cout << setw(3) << i << "|";
		for (sum1=2; sum1 <= sum; sum1++)
		{
			
			cout << setw(3) << sum1 * i << " ";
		}
		cout << endl;
	}
	return 0;

}
