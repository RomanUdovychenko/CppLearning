#include<iostream>

using namespace std;

int main() {
	
	int currVall, vall;

	if (cin >> currVall) {
		int count = 1;
		while (cin >> vall) {
			if (currVall == vall) {
				count++;
			}
			else {
				cout << currVall << " ocurs " << count << " tims" << endl;
				currVall = vall;
				count = 1;
			}
		 }
		cout << currVall << " ocurs " << count << " tims" << endl;
	}
	
	cout << endl;
	system("pause");
	return 0;
}