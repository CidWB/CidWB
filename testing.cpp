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


// Jan 2024, from COMP 1602
#include using namespace std;
int main() {
    struct Date {
        int year;
        string month;
        int day;
    };
   
    struct Employee{
        string name;
        char position;
        double salary;
        Date hireDate;
    };
   
    Date Birthday {};
        Birthday.year = 2004;
        Birthday.month = "july";
        Birthday.day = 13;
   
    Birthday = {2003, "september", 3};
   
    Employee grocery[2];
   
    grocery[0] = {"John Doe", 'M', 15000.00, {2019, "September", 5}};
   
    cout << grocery[0].name;
    return 0;
}
