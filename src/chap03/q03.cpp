#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::streamsize;
using std::string;
using std::setprecision;
using std::vector;

int main() {
    cout << "Please enter numbers: " << endl;

    vector<double> numberVec;
    double number;
    while (cin >> number) {
        numberVec.push_back(number);
    }

    sort(numberVec.rbegin(), numberVec.rend());

    cout << "The quartiles is: " << endl;
    for (vector<double>::size_type i = 0; i < numberVec.size(); ++i) {
        cout << numberVec.at(i) / 4 << " ";
    }
}