// main.cpp
#include <iostream>
#include <vector>
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

int main() {
    // Create rides using smart pointers for automatic memory management
    std::vector<std::unique_ptr<Ride>> rides;
    rides.push_back(std::make_unique<StandardRide>("S001", "123 Main St", "456 Oak Ave", 5.0));
    rides.push_back(std::make_unique<PremiumRide>("P001", "789 Pine Rd", "321 Elm Blvd", 5.0));
    
    // Create driver and rider
    Driver driver("D001", "John Driver", 4.8f);
    Rider rider("R001", "Jane Rider");
    
    // Process rides
    for (const auto& ride : rides) {
        rider.requestRide(ride.get());
        driver.addRide(ride.get());
        
        // Polymorphic calls
        std::cout << "Calculated fare: $" << ride->calculateFare() << std::endl;
        ride->rideDetails();
        std::cout << "===================" << std::endl;
    }
    
    // View ride history
    rider.viewRides();
    
    // Display driver info
    driver.getDriverInfo();
    
    return 0;
}