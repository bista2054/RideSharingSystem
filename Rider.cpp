// Rider.cpp
#include "Rider.h"
#include <iostream>

Rider::Rider(std::string id, std::string n)
    : riderID(id), name(n) {}

void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

void Rider::viewRides() const {
    std::cout << "Ride History for " << name << ":" << std::endl;
    for (const auto& ride : requestedRides) {
        ride->rideDetails();
        std::cout << "-------------------" << std::endl;
    }
}