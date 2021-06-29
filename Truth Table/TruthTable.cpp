#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>

#define AND *
#define OR +


using namespace std;

int resultNum(string choice, int first, int second) {



	if (choice == "and") {

		return first * second ;

	}
	else if (choice == "or") {

		if ((first == 1 && second == 1)) {

			return 1;
		}
		else {

			return first + second;
		}
	}

	


}

string trim(string input) {

	stringstream ss;


	for (int i = 0; i < input.size(); i++) {

		input[i] = tolower(input[i]);
	}


	for (int x = 0; x < (int)input.size(); x++) {

		if (isalpha(input[x])) {

			ss << input[x];
		}
	}

	if (ss.str().length() > 0) {
		return ss.str();
	}
	else {
		return "";
	}

}

bool isValid(int num1, int num2) {


	if ((num1 > 1 || num1 < 0) || (num2 > 1 || num2 < 0)) {

		return true;
	}

	return false;


}

void getNums(vector<pair<int, int>> myList, int size, string choice) {

	int counter = 1;
	int firstNum, secondNum;
	string prompt = "Row1";
	bool isValidInput = false;
	string str;


	for (int i = 0; i < size; i++) {


	
		
		cout << prompt <<": ";
		cin >> firstNum >> secondNum;

		while (isValid(firstNum,secondNum)) {

			
			cout << "The numbers are either 1 or 0!\n";
			cout << prompt <<": ";
			cin >> firstNum >> secondNum;

			
		}


		
		myList.push_back(make_pair(firstNum, secondNum));
		counter++;
		str = to_string(counter);
		prompt.replace(3, 1, str);



	}



	for (int i = 0; i < myList.size(); i++) {

		cout << resultNum(choice, myList[i].first, myList[i].second) << "\n";
		
	}
	



}

int main() {

	int amount;
	string choice;
	vector<pair<int, int>> myList;

	cout << "How many rows is the table: ";
	cin >> amount;

	cout << "\nWhat logical operator is the table: " ;
	cin >> choice;

	
	
	getNums(myList, amount, trim(choice));


	return 0;

}