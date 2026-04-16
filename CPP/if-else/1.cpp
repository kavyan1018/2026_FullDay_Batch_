#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;   // -> taking input for two variables

    if(a > b){
        cout << a <<" is max" << endl;   // endl -> end line 
    }
    else{
      cout << b <<" is max" << endl;
    }
}