#include <iostream>
#include <iomanip>  
using namespace std;

const int n_students = 20;

struct student {
    string firstName;
    string lastName;
    int testScore;
    char grade;
};

void readInData(student list[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter first name for student " << i + 1 << ": ";
        cin >> list[i].firstName;
        cout << "Enter last name for student " << i + 1 << ": ";
        cin >> list[i].lastName;
        cout << "Enter test score (0-100): ";
        cin >> list[i].testScore;
        cout << endl;
    }
}

void assignGrades(student list[], int size) {
    for (int i = 0; i < size; i++) {
        int score = list[i].testScore;
        if (score >= 90)
            list[i].grade = 'A';
        else if (score >= 80)
            list[i].grade = 'B';
        else if (score >= 70)
            list[i].grade = 'C';
        else if (score >= 60)
            list[i].grade = 'D';
        else
            list[i].grade = 'F';
    }
}

int findHighestScore(const student list[], int size) {
    int highest = list[0].testScore;
    for (int i = 1; i < size; i++) {
        if (list[i].testScore > highest)
            highest = list[i].testScore;
    }
    return highest;
}

void printHighestScorers(const student list[], int size, int highest) {
    cout << "\nStudent(s) with the highest score (" << highest << "):\n";
    for (int i = 0; i < size; i++) {
        if (list[i].testScore == highest)
            cout << list[i].firstName << ", " << list[i].lastName << endl;
    }
}

void displayAllStudents(const student list[], int size) {
    cout << left << setw(20) << "Name" 
         << setw(15) << "Test Score" 
         << setw(10) << "Grade" << endl;
    cout << "\n\n";
    for (int i = 0; i < size; i++) {
        cout << left << setw(20) 
             << (list[i].firstName + ", " + list[i].lastName)
             << setw(15) << list[i].testScore
             << setw(10) << list[i].grade
             << endl;
    }
}

int main() {
    student classList[n_students];

    readInData(classList, n_students);
    assignGrades(classList, n_students);
    displayAllStudents(classList, n_students);

    int highest = findHighestScore(classList, n_students);
    printHighestScorers(classList, n_students, highest);

    return 0;
}
