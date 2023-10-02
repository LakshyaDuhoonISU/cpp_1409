#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numStudents = 10;
    string students[numStudents];
    double averageMarks[numStudents];

    // Input student names and marks for five semesters
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter student name: ";
        cin >> students[i];

        double totalMarks = 0;
        bool failed = false;

        for (int j = 0; j < 5; j++) {
            cout << "Enter marks for semester " << j + 1 << ": ";
            double marks;
            cin >> marks;

            if (marks < 0 || marks > 100) {
                cout << "Invalid marks. Marks should be between 0 and 100." << endl;
                failed = true;
                break;
            }

            totalMarks += marks;

            if (marks < 60) {
                failed = true;
                break;
            }
        }

        if (!failed) {
            averageMarks[i] = totalMarks / 5;
        } else {
            averageMarks[i] = -1; // Mark this student as ineligible
        }
    }

    // Display eligible and non-eligible students
    cout << "\nEligible Students:\n";
    for (int i = 0; i < numStudents; i++) {
        if (averageMarks[i] >= 70) {
            cout << students[i] << " - Average Marks: " << averageMarks[i] << "%" << endl;
        }
    }

    cout << "\nNon-Eligible Students:\n";
    for (int i = 0; i < numStudents; i++) {
        if (averageMarks[i] < 0 || averageMarks[i] < 70) {
            cout << students[i] << " - Average Marks: " << (averageMarks[i] < 0 ? "Invalid" : to_string(averageMarks[i])) << "%" << endl;
        }
    }

    return 0;
}
