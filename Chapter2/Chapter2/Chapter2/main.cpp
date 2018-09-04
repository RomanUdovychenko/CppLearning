#include<iostream>
#include<string>
using namespace std;


int main() {
	int i = 45;
	int *p = &i;
	*p = *p**p;

	cout << *p << endl;
	cout << i << endl;
	cout << 45 * 45;

	cout << endl;
	system("pause");
	return 0;
}