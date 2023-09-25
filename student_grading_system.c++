#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
   vector<std::string> names;
   vector<double> grades;

    int numStudents;
    double totalGrade = 0.0;
    double highestGrade = 0.0;
    double lowestGrade = 100.0;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

       cout << "Enter the name of student " << i + 1 << ": ";
       cin >> name;

      cout << "Enter the marks for " << name << ": ";
        cin >> grade;

        names.push_back(name);
        grades.push_back(grade);

        totalGrade += grade;
        highestGrade = max(highestGrade, grade);
        lowestGrade = min(lowestGrade, grade);
    }

    double averageGrade = totalGrade / numStudents;

   cout << "\nAverage Grade: " << averageGrade << endl;
   cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
