// Driver.cpp
#include "Driver.h"
#include <iostream>

Driver::Driver(std::string id, std::string n, float r)
    : driverID(id), name(n), rating(r) {}

void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo() const {
    std::cout << "Driver ID: " << driverID << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Total Rides: " << assignedRides.size() << std::endl;
}