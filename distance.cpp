#include "distance.h"
#include <cmath>

double calculateDistance(Location a, Location b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;

    return sqrt(dx * dx + dy * dy);
}

double calculateRouteDistance(vector<Location> route) {
    if (route.size() < 2) {
        return 0;
    }

    double totalDistance = 0;

    for (int i = 0; i < route.size(); i++) {
        int next = (i + 1) % route.size();

        totalDistance += calculateDistance(route[i], route[next]);
    }

    return totalDistance;
}
