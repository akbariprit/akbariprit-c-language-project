#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

    static int totalVehicles; 

public:
    
    Vehicle() {
        vehicleID = 0;
        manufacturer = "";
        model = "";
        year = 0;
        totalVehicles++;
    }

    Vehicle(int id, string manu, string mod, int yr) {
        vehicleID = id;
        manufacturer = manu;
        model = mod;
        year = yr;
        totalVehicles++;
    }

    
    ~Vehicle() {
        totalVehicles--;
    }


    int getVehicleID() const { return vehicleID; }
    string getManufacturer() const { return manufacturer; }
    string getModel() const { return model; }
    int getYear() const { return year; }

  void setVehicleID(int id) { vehicleID = id; }
    void setManufacturer(string manu) { manufacturer = manu; }
    void setModel(string mod) { model = mod; }
    void setYear(int yr) { year = yr; }

    static int getTotalVehicles() {
        return totalVehicles;
    }
};


int Vehicle::totalVehicles = 0;

