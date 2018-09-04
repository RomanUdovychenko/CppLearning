#include<iostream>
#include<string>
using namespace std;


int main() {

	//int &r = 10;//Error Not Literal
	//int a = 10;
	//int &r = a;//ok
	//cout << r;//10
	//cout << &r;//adres in memory

	//double a = 10.2;
	//int &c = a;//Error double!=int

	//int a = 1.1;
	//int &r = a;
	//ok


	//int &t = 1.1;//Error bad init 
	//int &tr;//Error not Intit

	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri;


	cout << endl;
	system("pause");
	return 0;
}