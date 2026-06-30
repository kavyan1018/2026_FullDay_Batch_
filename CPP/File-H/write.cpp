#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // FILE
    ofstream file("test.txt"); // create a file

    file << "Hello World" << endl; // write to file

    cout << "Data written to file successfully." << endl;
    return 0;
}