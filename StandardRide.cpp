// StandardRide.cpp
#include "StandardRide.h"

StandardRide::StandardRide(std::string id, std::string pickup, std::string dropoff, float dist)
    : Ride(id, pickup, dropoff, dist) {}

float StandardRide::calculateFare() {
    fare = 5.0 + (distance * 1.5); // Base fare $5 + $1.5/mile
    return fare;
}