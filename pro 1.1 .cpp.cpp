#include <iostream>
#include <iomanip>
using namespace std;

class TimeConverter {
private:
    int totalSeconds;
    int hours, minutes, seconds;

public:
    
    TimeConverter(int sec) {
        totalSeconds = sec;
        convert();
    }

    
    void convert() {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }

    
    void display() {
        cout << "Time in HH:MM:SS format: "
             << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }
};

int main() {
    int inputSeconds;
    cout << "Enter total seconds: ";
    cin >> inputSeconds;

    TimeConverter t(inputSeconds);
    t.display();

    
}
