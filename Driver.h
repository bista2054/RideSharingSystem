// Driver.h
#ifndef DRIVER_H
#define DRIVER_H

#include <vector>
#include <string>
#include "Ride.h"

class Driver {
private:
    std::string driverID;
    std::string name;
    float rating;
    std::vector<Ride*> assignedRides;

public:
    Driver(std::string id, std::string n, float r);
    void addRide(Ride* ride);
    void getDriverInfo() const;
};

#endif // DRIVER_H