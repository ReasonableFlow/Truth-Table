#pragma once


class TableTruth {


private:
	int counter;
	int firstNum, secondNum;
	bool isValidInput;
	string str;
	string prompt;

public:

	TableTruth() {

		 prompt = "Row 1";
		 isValidInput = false;

	}
	int resultNum(int choice, int first, int second) {



		if (choice == 1) {

			return first AND second;

		}
		else if (choice == 2) {

			if ((first == 1 && second == 1)) {

				return 1;
			}
			else {

				return first OR second;
			}
		}
		else if (choice == 3) {

			if (first != second) {

				return 1;
			}
			else {
				return 0;
			}
		}




	}

	
	bool isValid(int num1, int num2) {


		if ((num1 > 1 || num1 < 0) || (num2 > 1 || num2 < 0)) {

			return true;
		}

		return false;


	}

	void getNums(vector<pair<int, int>>& myList, int size, int choice) {

		 counter = 1;
	
	

		for (int i = 0; i < size; i++) {




			cout << prompt << ": ";
			cin >> firstNum >> secondNum;

			while (isValid(firstNum, secondNum)) {


				cout << "The numbers are either 1 or 0!\n";
				cout << prompt << ": ";
				cin >> firstNum >> secondNum;


			}

			myList.push_back(make_pair(firstNum, secondNum));
			counter++;
			str = to_string(counter);
			prompt.replace(4, 1, str);



		}


	}


	void printTable(vector<pair<int, int>>& myList, int choice) {


	
		 counter = 1;
		 prompt = "Row 1";
		
		 cout << setw(30) <<"\nTruth Table" <<"\n";
		 cout << setw(25) <<"___________________________\n";

		for (int i = 0; i < myList.size(); i++) {


			
			cout << prompt << ": " << resultNum(choice, myList[i].first, myList[i].second) << setw(5) << "\n";

			counter++;
			str = to_string(counter);
			prompt.replace(4, 1, str);

		}


	}





};