// Ride.cpp
#include "Ride.h"
#include <iostream>

Ride::Ride(std::string id, std::string pickup, std::string dropoff, float dist)
    : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist), fare(0) {}

float Ride::calculateFare() {
    fare = 5.0 + (distance * 1.0); // Base fare $5 + $1/mile
    return fare;
}

void Ride::rideDetails() {
    std::cout << "Ride ID: " << rideID << std::endl;
    std::cout << "Pickup: " << pickupLocation << std::endl;
    std::cout << "Dropoff: " << dropoffLocation << std::endl;
    std::cout << "Distance: " << distance << " miles" << std::endl;
    std::cout << "Fare: $" << calculateFare() << std::endl;
}