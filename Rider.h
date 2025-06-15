// Rider.h
#ifndef RIDER_H
#define RIDER_H

#include <vector>
#include <string>
#include "Ride.h"

class Rider {
private:
    std::string riderID;
    std::string name;
    std::vector<Ride*> requestedRides;

public:
    Rider(std::string id, std::string n);
    void requestRide(Ride* ride);
    void viewRides() const;
};

#endif // RIDER_H