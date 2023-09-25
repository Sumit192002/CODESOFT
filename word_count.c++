#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string txt;
    cout << "Enter the full name of the text file: ";
    cin >> txt;

    ifstream file(txt);

    if (!file.is_open()) {
        cerr << "Error: Unable to open the file " << txt << endl;
        return 1; 
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();

    cout << "Total word count in the file: " << wordCount << endl;

    return 0;
}
