#include <iostream>
using namespace std;

class Vehicle {
protected:
    int id; string model;
public:
    Vehicle(int i, string m) : id(i), model(m) {}
    virtual void display() { cout << "ID: " << id << ", Model: " << model << endl; }
    int getID() { return id; }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
    string fuel;
public:
    Car(int i, string m, string f) : Vehicle(i, m), fuel(f) {}
    void display() override {
        Vehicle::display();
        cout << "Fuel: " << fuel << endl;
    }
};

class ElectricCar : public Car {
    float battery;
public:
    ElectricCar(int i, string m, string f, float b) : Car(i, m, f), battery(b) {}
    void display() override {
        Car::display();
        cout << "Battery: " << battery << " kWh\n";
    }
};

class VehicleRegistry {
    Vehicle* list[100];
    int count = 0;
public:
    void add(Vehicle* v) { list[count++] = v; }
    void show() {
        for (int i = 0; i < count; i++) list[i]->display();
    }
    void search(int id) {
        for (int i = 0; i < count; i++)
            if (list[i]->getID() == id) list[i]->display();
    }
    ~VehicleRegistry() {
        for (int i = 0; i < count; i++) delete list[i];
    }
};

int main() {
    VehicleRegistry r;
    int ch;
    do {
        cout << "\n1.Add Car  2.Add E-Car  3.View  4.Search  5.Exit\nChoice: ";
        cin >> ch;
        if (ch == 1) {
            int id; string m, f;
            cin >> id >> m >> f;
            r.add(new Car(id, m, f));
        } else if (ch == 2) {
            int id; string m, f; float b;
            cin >> id >> m >> f >> b;
            r.add(new ElectricCar(id, m, f, b));
        } else if (ch == 3) {
            r.show();
        } else if (ch == 4) {
            int id; cin >> id;
            r.search(id);
        }
    } while (ch != 5);
    return 0;
}

