#include<iostream>
#include<string>
using namespace std;

int main(){
	string str="d";

	if (str.empty()) {
		getline(cin, str);
		cout << "Text: << " << str << " >>" << endl;
		cout << "Size text: < " << str.size() << " >"<<endl;
	}
	else
	{
		cout << "STR NOT EMPTY"<<endl;
	}

	system("pause");
	return 0;
}