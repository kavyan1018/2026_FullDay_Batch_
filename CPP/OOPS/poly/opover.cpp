#include<iostream>
using namespace std;

class Test{

    int num;

    public:

        Test(int a){

            num = a;
        }

        Test operator *(Test t){

            return Test(num + t.num);

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