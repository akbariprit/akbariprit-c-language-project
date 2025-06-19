#include <iostream>
#include <cstring>
using namespace std;

class Train {
    int trainNumber;
    char trainName[50], source[50], destination[50], trainTime[10];
    static int trainCount;

public:
    Train() { trainNumber = 0; strcpy(trainName, ""); strcpy(source, ""); strcpy(destination, ""); strcpy(trainTime, ""); trainCount++; }

    Train(int n, const char* tn, const char* s, const char* d, const char* t) {
        trainNumber = n; strcpy(trainName, tn); strcpy(source, s); strcpy(destination, d); strcpy(trainTime, t); trainCount++;
    }

    ~Train() { trainCount--; }

    void inputTrainDetails() {
        cout << "Train No: "; cin >> trainNumber; cin.ignore();
        cout << "Name: "; cin.getline(trainName, 50);
        cout << "Source: "; cin.getline(source, 50);
        cout << "Destination: "; cin.getline(destination, 50);
        cout << "Time: "; cin.getline(trainTime, 10);
    }

    void displayTrainDetails() {
        cout << trainNumber << " " << trainName << " " << source << " " << destination << " " << trainTime << endl;
    }

    static int getTrainCount() { return trainCount; }
};

int Train::trainCount = 0;

int main() {
    Train t1, t2(201, "Superfast", "Delhi", "Jaipur", "06:30");
    t1.inputTrainDetails();
    t1.displayTrainDetails();
    t2.displayTrainDetails();
    cout << "Total Trains: " << Train::getTrainCount();
    return 0;
}







