#include <iostream>
#include <string>

using namespace std;

string getInput(string descriptor) {
    string input;

    cout << descriptor << endl << ">> ";
    cin >> input;
    return input;
}

bool methodOne(string input) {
    string stringReverse;

    for(int i = input.length() - 1; i >= 0; i--)
        stringReverse.push_back(input[i]);

    if(input == stringReverse)
        return true;
    else
        return false;
}

int main() {
    int j;
    cout << "This program will check if the entered value is a palindrome or not." << endl;
    string toCheck = getInput("Please enter a word to check.");

    bool methodOneOut = methodOne(toCheck);

    cout << methodOneOut;

    return 0;
}
