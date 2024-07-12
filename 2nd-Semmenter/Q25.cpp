#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define the student structure
struct Student
{
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;
};

int main()
{
    ofstream file("students.txt");
    if (!file.is_open())
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Student students[10];

    // Input student details
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Roll No.: ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Class: ";
        cin >> students[i].className;
        cout << "Year: ";
        cin >> students[i].year;
        cout << "Total Marks: ";
        cin >> students[i].totalMarks;
    }

    // Write student records to the file
    for (int i = 0; i < 10; i++)
    {
        file << students[i].rollNo << " " << students[i].name << " "
             << students[i].className << " " << students[i].year << " "
             << students[i].totalMarks << endl;
    }

    cout << "Student records written to students.txt successfully!" << endl;

    return 0;
}
