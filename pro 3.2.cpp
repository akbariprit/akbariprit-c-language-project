#include <iostream>
#include<string.h>
using namespace std;

class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;
    static int totalVehicles;

public:
    Vehicle() { totalVehicles++; }
    ~Vehicle() { totalVehicles--; }
};

int Vehicle::totalVehicles = 0;


class Car : public Vehicle {
protected:
    string fuelType;

public:
    Car() {}
};


class ElectricCar : public Car {
protected:
    float batteryCapacity;

public:
    ElectricCar() {}
};


class SportsCar : public ElectricCar {
protected:
    int topSpeed;

public:
    SportsCar() {}
};


class Aircraft {
protected:
    int flightRange;

public:
    Aircraft() {}
};


class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar() {}
};

class Sedan : public Car {
public:
    Sedan() {}
};

class SUV : public Car {
public:
    SUV() {}
};

