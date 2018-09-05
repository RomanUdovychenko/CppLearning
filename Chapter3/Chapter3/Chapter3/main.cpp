#include<iostream>
#include<string>
using namespace std;

int main(){
	string strSum,strCin;
	
	while (cin>>strCin)
	{
		strSum += strCin+" ";
		cout << "New Str: " << strSum << endl;
	}

	system("pause");
	return 0;
}