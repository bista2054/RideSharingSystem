// PremiumRide.h
#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"

class PremiumRide : public Ride {
public:
    PremiumRide(std::string id, std::string pickup, std::string dropoff, float dist);
    float calculateFare() override;
};

#endif // PREMIUM_RIDE_H