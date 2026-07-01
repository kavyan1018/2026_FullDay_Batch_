// read and write file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file;

    // ios -> input and output stream
    // :: -> accessing the static member of the class
    // out -> open the file for writing
    // in -> open the file for reading
    // app -> open the file for appending

    // write
    file.open("demo2.txt", ios::out);
    file << "This is a demo file." << endl;
    file.close();

    // read

    file.open("demo2.txt", ios::in);
    string data;
    getline(file, data);

    cout << data << endl;

    file.close();

    return 0;
}