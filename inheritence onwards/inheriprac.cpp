#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    float mileage;
    int price;

public:
    Vehicle(float mile, int cost)
    {
        this->mileage = mile;
        this->price = cost;
    }
    void printdata_vehicle()
    {
        cout << "THE MILEAGE GIVEN IS : " << mileage << endl;
        cout << "THE PRICE IS : " << price << endl;
    }
};
class Car : public Vehicle
{
protected:
    int ownership_cost;
    string warranty;
    int seating_capacity;
    string fuel_type;

public:
    Car(int oc, string war, int sc, string ft) : Vehicle(float mile, int cost)
    {
        this->ownership_cost = oc;
        this->warranty = war;
        this->seating_capacity = sc;
        this->fuel_type = ft;
    }
    void print_car()
    {
        cout << "OWNERSHIP COST :" << ownership_cost << endl
             << "WARRANTY IS : " << warranty << endl
             << "SEATING CAPACITY IS :" << seating_capacity << endl
             << "FUEL TYPE IS :" << fuel_type << endl;
    }
};
class Bike : public Vehicle
{
protected:
    int number_gears;
    int number_of_cylinders;
    string cooling_type;
    string wheel_type;

public:
    Bike(int ng, int noc, string ct, string wt) : Vehicle(float mile, int cost)
    {
        this->number_gears = ng;
        this->number_of_cylinders = noc;
        this->cooling_type = ct;
        this->wheel_type = wt;
    }
    void print_bike()
    {
        cout << "NUMBER OF GEARS ARE: " << number_gears << endl
             << "NUMBER OF CYLINDERS ARE :" << number_of_cylinders << endl
             << "COOLING TYPE OF THE BIKE IS " << cooling_type << endl
             << "WHEEL TYPE :" << wheel_type << endl;
    }
};
class Audi : public Car
{
protected:
    string model_type;

public:
    Audi(int oc, string war, int sc, string ft, string mt) : Car(int oc, string war, int sc, string ft)
    {
        model_type = mt;
    }
    void print_audi()
    {
        cout << "OWNERSHIP COST :" << ownership_cost << endl
             << "WARRANTY IS : " << warranty << endl
             << "SEATING CAPACITY IS :" << seating_capacity << endl
             << "FUEL TYPE IS :" << fuel_type << endl
             << "MODEL TYPE IS " << model_type << endl;
    }
};
class TVS : public Bike
{
protected:
    string make_type;

public:
    TVS(int ng, int noc, string ct, string wt, string maket) : Bike(int ng, int noc, string ct, string wt)
    {
        make_type = maket;
    }
    void print_TVS()
    {
        cout << "NUMBER OF GEARS ARE: " << number_gears << endl
             << "NUMBER OF CYLINDERS ARE :" << number_of_cylinders << endl
             << "COOLING TYPE OF THE BIKE IS " << cooling_type << endl
             << "WHEEL TYPE :" << wheel_type << endl
             << "MAKE TYPE IS :" << make_type << endl;
    }
}

int
main()
{
    Audi A(500000, 5, 2, 2.7, 5000000, "petrol", "convertable");

    A.print_audi();

    return 0;
}
