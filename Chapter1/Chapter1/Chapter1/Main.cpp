#include<iostream>

using namespace std;

int main() {
	
	int firstNum, seconfNum;

	cout << "firstNum and second num ";
	cin >> firstNum >> seconfNum;
	

	while (firstNum<=seconfNum)
	{
		cout << firstNum << " ";
		firstNum++;
	}

	//cout << "sum of 50-100 number= " << sum;
	
	cout << endl;
	system("pause");
	return 0;
}