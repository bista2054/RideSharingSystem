// Ride.h
#ifndef RIDE_H
#define RIDE_H

#include <string>

class Ride {
protected:
    std::string rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    float distance;
    float fare;

public:
    Ride(std::string id, std::string pickup, std::string dropoff, float dist);
    virtual ~Ride() = default;

    virtual float calculateFare();
    virtual void rideDetails();
};

#endif // RIDE_H