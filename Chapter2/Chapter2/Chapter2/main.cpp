#include<iostream>
#include<string>
using namespace std;

string globalSTR;
int globalInt;

int main() {

	string localStr;
	int localInt;

	
	cout << globalSTR;//error
	//cout << globalSTR;//ok
	cout << localStr;//error
	
	//cout << localInt;//error not init

	cout << endl;
	system("pause");
	return 0;
}