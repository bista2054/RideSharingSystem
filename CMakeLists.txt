cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        StandardRide.cpp
        PremiumRide.cpp
        Ride.h
        Ride.cpp
        StandardRide.h
        PremiumRide.h
        Driver.cpp
        Driver.h
        Rider.cpp
        Rider.h
)
