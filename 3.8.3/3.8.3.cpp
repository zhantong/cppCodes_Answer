#include <iostream>
using namespace std;

int main()
{
	for (int i = 'a'; i <= 'z'; i++)
		cout << (char)i << ' ';
	cout << endl;
	for (int i = 'z'; i >= 'a'; i--)
		cout << (char)i << ' ';
	cout << endl;
}
