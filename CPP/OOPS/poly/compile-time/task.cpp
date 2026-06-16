#include<iostream>
using namespace std;

class task{

    private:
        int feet;
        int inch;

    public:
        // constructor
        task(int f = 0 , int i = 0){
            feet = f;
            inch = i;
        }


        // overloading + operator
        task operator +(task t){

            task temp;

            temp.feet = feet + t.feet;
            temp.inch = inch + t.inch;

            // converting inch to feet
            if(temp.inch >= 12){

                temp.feet += temp.inch / 12;
                temp.inch = temp.inch %= 12;
            }

            return temp;
        }

        void display(){
            cout << "Feet: " << feet << " Inch: " << inch << endl;
        }
};

int main(){

    task t1(5, 8);
    task t2(3, 10);

    task t3 = t1 + t2;

    t3.display();

    return 0;

}