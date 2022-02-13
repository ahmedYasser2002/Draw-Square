
#include <iostream>
using namespace std;

int main()
{
	int sqaureSideLength;
	cout << "Enter the square side length:";
	cin >> sqaureSideLength;
	

	for (int i = 0; i < sqaureSideLength; i++) {

		cout << "						";

		cout << "*";

		if (i == 0 || i == sqaureSideLength - 1) {
			for (int j = 1; j < sqaureSideLength; j++) {
				cout << " *";
			}
		}

		else {
			for (int k = 1; k < sqaureSideLength - 1; k++) {
				cout << "  ";
				
			}
			cout << " *";
		}

		cout << endl;


		
	}



	return 0;
}
