//List of speeds given and corresponding fuel consumption, find the distance. Code in C ?

#include <stdio.h>

int main() {
  // Define the speeds and fuel consumptions.
  float speeds[] = {60, 70, 80, 90, 100};
  float fuelConsumptions[] = {3.0, 4.0, 5.0, 6.0, 7.0};

  // Calculate the distance traveled for each speed.
  for (int i = 0; i < sizeof(speeds) / sizeof(speeds[0]); i++) {
    float distance = speeds[i] / fuelConsumptions[i];
    printf("The distance traveled at %.1f mph is %.1f miles.\n", speeds[i], distance);
  }

  return 0;
}