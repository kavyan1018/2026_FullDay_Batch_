#include<iostream>
using namespace std;

// base class / vehicle class

class Vehicle{

    public:
        string brand;

    Vehicle(string b){
        brand = b;
    }

    void showBrand(){
        cout << "Brand: " << brand << endl;
    }

};


// derived class / car class  -> Vheicle class call as parent class

class Car : public Vehicle{

    public:
        string model;

    Car(string b, string m) : Vehicle(b) {  // calling the constructor of the base class to initialize the brand
        model = m;
    }

    void showModel(){
        cout << "Model: " << model << endl;
    }
};


class SportsCar : public Car{

    public:
        int topSpeed;

    SportsCar(string b, string m, int ts) : Car(b, m){  
        
        topSpeed = ts;

    }

    void showSpeed(){
        cout << "Top Speed: " << topSpeed << endl;
    }
};

int main(){

    SportsCar sc1("Ferrari", "488 GTB", 330);

    sc1.showBrand();  // inherited from Vehicle class
    sc1.showModel();  // overridden in SportsCar class
    sc1.showSpeed();  // defined in SportsCar class
}