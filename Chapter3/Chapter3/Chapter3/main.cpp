#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	
	int arr[5] = {1,2,3,4,5};
	int* ip = arr;
	int* ip2 = ip + 2;

	cout << *ip2;

	cout << endl;
	system("pause");
	return 0;
}