#include <iostream>
using namespace std;

class Vehicle {
protected:
    int vehicleID;
    string model;
public:
    Vehicle(int id, string m) : vehicleID(id), model(m) {}
    virtual void display() { cout << "ID: " << vehicleID << ", Model: " << model << endl; }
    int getID() { return vehicleID; }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
    string fuelType;
public:
    Car(int id, string m, string fuel) : Vehicle(id, m), fuelType(fuel) {}
    void display() override {
        Vehicle::display();
        cout << "Fuel: " << fuelType << endl;
    }
};

class VehicleRegistry {
    Vehicle* vehicles[100];
    int count = 0;
public:
    void addVehicle(Vehicle* v) { vehicles[count++] = v; }
    void displayAll() {
        for (int i = 0; i < count; i++) vehicles[i]->display();
    }
    void searchByID(int id) {
        for (int i = 0; i < count; i++)
            if (vehicles[i]->getID() == id) vehicles[i]->display();
    }
    ~VehicleRegistry() {
        for (int i = 0; i < count; i++) delete vehicles[i];
    }
};

int main() {
    VehicleRegistry r;
    r.addVehicle(new Car(1, "Swift", "Petrol"));
    r.addVehicle(new Car(2, "Tesla", "Electric"));

    r.displayAll();
    r.searchByID(2);
    return 0;
}

