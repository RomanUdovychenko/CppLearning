#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1,str2;
	
	getline(cin, str1);
	getline(cin, str2);
	//size
	if (str1.size() == str2.size()) {
		cout << "(size)str1 and str2 ==" << endl;
	}
	else if (str1.size() > str2.size()) {
		cout << "(size)str1>str2" << endl;
	}
	else {
		cout << "(size)str1<str2" << endl;
	}
	//not size
	if (str1 == str2) {
		cout << "str1 and str2 ==" << endl;
	}
	else if (str1 > str2) {
		cout << "str1>str2" << endl;
	}
	else {
		cout << "str1<str2" << endl;
	}


	system("pause");
	return 0;
}