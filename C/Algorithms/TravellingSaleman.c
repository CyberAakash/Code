//Travelling salesman algorithm.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Define the number of cities.
#define NUM_CITIES 5

// Define the distance between each pair of cities.
int distances[NUM_CITIES][NUM_CITIES] = {
    {0, 10, 15, 20, 25},
    {10, 0, 30, 35, 40},
    {15, 30, 0, 50, 55},
    {20, 35, 50, 0, 60},
    {25, 40, 55, 60, 0}
};

// Define a function to find the nearest unvisited city.
int findNearestUnvisitedCity(int city, int visited[]) {
  // Initialize the minimum distance to infinity.
  int minDistance = INT_MAX;

  // Initialize the index of the nearest unvisited city to -1.
  int nearestCity = -1;

  // Iterate over all cities.
  for (int i = 0; i < NUM_CITIES; i++) {
    // If the city is not visited and the distance to the city is less than the minimum distance, update the minimum distance and the index of the nearest city.
    if (!visited[i] && distances[city][i] < minDistance) {
      minDistance = distances[city][i];
      nearestCity = i;
    }
  }

  // Return the index of the nearest unvisited city.
  return nearestCity;
}

// Define a function to print the tour.
void printTour(int tour[]) {
  // Iterate over the tour.
  for (int i = 0; i < NUM_CITIES; i++) {
    // Print the city.
    printf("%d ", tour[i]);
  }

  // Print the final city.
  printf("%d\n", tour[0]);
}

int main() {
  // Initialize the visited array.
  int visited[NUM_CITIES] = {0};

  // Initialize the tour array.
  int tour[NUM_CITIES];

  // Select a random city to be the first city in the tour.
  int city = rand() % NUM_CITIES;

  // Mark the first city as visited.
  visited[city] = 1;

  // Add the first city to the tour.
  tour[0] = city;

  // Iterate over the remaining cities.
  for (int i = 1; i < NUM_CITIES; i++) {
    // Find the nearest unvisited city.
    int nearestCity = findNearestUnvisitedCity(city, visited);

    // Add the nearest city to the tour.
    tour[i] = nearestCity;

    // Mark the nearest city as visited.
    visited[nearestCity] = 1;

    // Update the city to be the nearest city.
    city = nearestCity;
  }

  // Print the tour.
  printTour(tour);

  return 0;
}