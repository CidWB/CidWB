#include <iostream>
using namespace std;
int main() {
	int totalGrade = 0, count =0;
	
	cout << "Please enter your grades. To find your average, type '9999'." << endl;
	
	int grade;
	bool isGrade = true;
	
	while (isGrade) {
		cin >> grade;
		if (grade == 9999) {
			isGrade = false;
			cout << "Your total is " << totalGrade << endl;
			cout << count << endl;
			float avgGrade = totalGrade/count;
			cout << "Your average is " << avgGrade << endl;
		} else {
			totalGrade = totalGrade + grade;
			count++;
		}	
	}
	return 0;
}
