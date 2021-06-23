#include <iostream>
#include <iomanip>


#define AND *
#define OR +


using namespace std;

int resultNum() {


	return 0;


}

int main() {

	int amount;

	cout << "How many rows is the table: ";
	cin >> amount;

	for (int i = 0; i < amount; i++) {
		cout << "\nA\n";
		cout << "___\n\n";
		cout << 5 << setw(10) << 3 << endl;
	}


	return 0;

}