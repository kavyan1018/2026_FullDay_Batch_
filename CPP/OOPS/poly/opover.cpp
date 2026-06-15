#include<iostream>
using namespace std;

class Test{

    int num;

    public:

        Test(int a){

            num = a;
        }

        /*
            return_type  operator symbol(args){
            
                // code 

            }
        */


        // Operator Overloading function to overload the * operator
        Test operator *(Test t){

            return Test(num + t.num); // this creates a new object and returns it to the caller

                    // Test(30)
        }

        void display(){

            cout << "The value of num is: " << num << endl;
        }


};

int main(){

    Test t1(10), t2(20);

    Test t3 = t1 * t2;

    t3.display();

    return 0;

}