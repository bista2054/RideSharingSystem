// PremiumRide.cpp
#include "PremiumRide.h"

PremiumRide::PremiumRide(std::string id, std::string pickup, std::string dropoff, float dist)
    : Ride(id, pickup, dropoff, dist) {}

float PremiumRide::calculateFare() {
    fare = 5.0 + (distance * 3.0); // Base fare $5 + $3/mile
    fare *= 1.10; // 10% service fee
    return fare;
}