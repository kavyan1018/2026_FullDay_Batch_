#include <iostream>
using namespace std;

class car{
    public:
        string brand;
        int price;

        void input(){
            cout<<"Enter brand: ";
            cin>>brand;
            cout<<"Enter price: ";
            cin>>price;
        }

        void show(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Price: "<<price<<endl;
        }
};


int main(){

    car c1;

    cout << "Enter details of car !"<<endl;
    c1.input();

    cout << "Car details ! "<<endl;
    c1.show();
}