#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	getline(cin, str);

	for (auto i: str) {
		cout << i << "--";
	}
	

	system("pause");
	return 0;
}