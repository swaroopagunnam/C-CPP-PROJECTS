#include <iostream>
using namespace std;

class Device {
private:
    float temperature;
    float voltage;

public:
    Device(float t, float v) {
        temperature = t;
        voltage = v;
    }

    void checkStatus() {
        cout << "Temperature: " << temperature << " C" << endl;
        cout << "Voltage: " << voltage << " V" << endl;

        if (temperature > 70.0) {
            cout << "WARNING: Over-temperature detected!" << endl;
        }

        if (voltage < 3.3) {
            cout << "WARNING: Under-voltage detected!" << endl;
        }

        if (temperature <= 70.0 && voltage >= 3.3) {
            cout << "Device status: NORMAL" << endl;
        }
    }
};

int main() {
    float temp, volt;

    cout << "Enter device temperature: ";
    cin >> temp;

    cout << "Enter device voltage: ";
    cin >> volt;

    Device dev(temp, volt);
    dev.checkStatus();

    return 0;
}
