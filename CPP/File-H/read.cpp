#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // FILE
    ifstream file("test.txt"); // create a file

    string line;

    while(getline(file, line)){
        cout << line << endl; // read from file
    }
    return 0;
}