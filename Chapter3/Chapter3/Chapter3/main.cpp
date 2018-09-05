#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	getline(cin, str);

	for (auto &i: str) {
		i = toupper(i);
	}
	
	cout << str;

	cout << endl;
	system("pause");
	return 0;
}