#include<iostream>
using namespace std;

int main(){

    // int a = 10;
    // int b = 0;


    // cout << a / b; // Runtime error: Division by zero

    // cout << "This line will not be executed due to the runtime error." << endl;


 
    int a = 10;
    int b = 0;

    try{
        if(b == 0){
            throw "Division by zero error"; // Throwing an exception
            
            cout << a / b;
        }
    } catch(const char* msg){
            cout << msg << endl;
    }
    cout << "Program Ended !" << endl;
}