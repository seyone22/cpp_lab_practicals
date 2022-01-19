#include <iostream>
#include <vector>

using namespace std;

string getInput(string descriptor) {
    string input;

    cout << descriptor << endl << ">> ";
    cin >> input;
    return input;
}

int main() {
    cout << "This program will check if the entered value is a palindrome or not." << endl;
    string toCheck = getInput("Please enter a word to check.");

    vector<char> palindromeTest;




    return 0;
}
