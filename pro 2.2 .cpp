#include <iostream>
#include <cstring>
using namespace std;

class Train {
    int trainNumber;
    char trainName[50], source[50], destination[50], trainTime[10];
    static int trainCount;
public:
    Train() { trainNumber = 0; strcpy(trainName, ""); strcpy(source, ""); strcpy(destination, ""); strcpy(trainTime, ""); trainCount++; }
    ~Train() { trainCount--; }
    void input() {
        cout << "No: "; cin >> trainNumber; cin.ignore();
        cout << "Name: "; cin.getline(trainName, 50);
        cout << "Source: "; cin.getline(source, 50);
        cout << "Dest: "; cin.getline(destination, 50);
        cout << "Time: "; cin.getline(trainTime, 10);
    }
    void display() {
        cout << trainNumber << " " << trainName << " " << source << " " << destination << " " << trainTime << endl;
    }
    int getNo() { return trainNumber; }
    static int getCount() { return trainCount; }
};
int Train::trainCount = 0;

class RailwaySystem {
    Train trains[100];
    int totalTrains;
public:
    RailwaySystem() { totalTrains = 0; }
    void addTrain() { if (totalTrains < 100) trains[totalTrains++].input(); }
    void displayAll() {
        for (int i = 0; i < totalTrains; i++) trains[i].display();
    }
    void search(int no) {
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getNo() == no) { trains[i].display(); return; }
        }
        cout << "Not found\n";
    }
};

int main() {
    RailwaySystem rs;
    rs.addTrain();
    rs.addTrain();
    rs.displayAll();
    int n; cout << "Search No: "; cin >> n;
    rs.search(n);
    return 0;
}

