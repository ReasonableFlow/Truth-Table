#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

#define AND *
#define OR +


using namespace std;

#include "Truth_Tab.h"


int main() {

	int amount;
	int choice;
	vector<pair<int, int>> myList;

	cout << "How many rows is the table: ";
	cin >> amount;

	

	cout << "\n1.) AND" <<
		"\n2.) OR" <<
		"\n3.) XOR";

	cout << "\n\nWhat logical operator is the table: ";
	cin >> choice;
	cout << "\n\n";

	
	TableTruth t;
	t.getNums(myList, amount, choice);
	t.printTable(myList, choice);



	return 0;

}