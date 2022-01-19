//write a small c++ program to print the square using ".". The program should prompt user to enter the width/height.
//Author: S.G.Seyone

#include <iostream>

using namespace std;

string getInput(string descriptor)
{
    string input;
    cout << descriptor << endl;
    cout << ">> ";
    cin >> input;
    return input;
}

int main() {
    int dimension = 0;
    string selector = "";
    do {
        dimension = stoi(getInput("Please enter the dimensions of the square to be printed"));

        for (int i = 0; i < dimension; i++)
        {
            for (int i = 0; i < dimension; i++)
            {
                cout << ". ";
            }
            cout << endl;
        }
        selector = getInput("Do you want to print another square? (Y/N)");
    }while(selector == "Y" || selector == "y");

    return 0;
}
