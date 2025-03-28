#include <iostream>
using namespace std;

class Device {
protected:
    int deviceID;
    string deviceName;
    bool status;

public:
    Device(int id, string name) : deviceID(id), deviceName(name), status(false) {}
    virtual void turnOn() { status = true; }
    virtual void turnOff() { status = false; }
    virtual void displayInfo() { cout << deviceName << " is " << (status ? "On" : "Off") << endl; }
};

class Light : public Device {
    int brightnessLevel;
    string colorMode;
public:
    Light(int id, string name, int brightness, string color) : Device(id, name), brightnessLevel(brightness), colorMode(color) {}
    void displayInfo() { cout << deviceName << " - Brightness: " << brightnessLevel << ", Color Mode: " << colorMode << endl; }
};

class Thermostat : public Device {
    float temperature;
public:
    Thermostat(int id, string name, float temp) : Device(id, name), temperature(temp) {}
    void getStatus() { cout << deviceName << " - Current Temperature: " << temperature << "C" << endl; }
};

class SecurityCamera : public Device {
public:
    SecurityCamera(int id, string name) : Device(id, name) {}
    void turnOn() { status = true;
        cout << deviceName << " started recording." << endl;
    }
};

class SmartPlug : public Device {
public:
    SmartPlug(int id, string name) : Device(id, name) {}
    void turnOff() { status = false;
        cout << deviceName << " turned off and logged power usage." << endl;
    }
};

int main() {
    Light l1(1, "Room Light", 80, "Warm");
    Thermostat t1(2, "Home Thermostat", 22.5);
    SecurityCamera c1(3, "door Camera");
    SmartPlug p1(4, "Kitchen Plug");

    l1.turnOn();
    l1.displayInfo();

    t1.getStatus();

    c1.turnOn();

    p1.turnOff();

    return 0;
}