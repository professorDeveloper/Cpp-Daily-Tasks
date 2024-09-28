#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;

// Function to clear the console (system-dependent)
void clearScreen() {
    #ifdef _WIN32
        system("CLS");  // Windows
    #else
        system("clear");  // Linux/MacOS
    #endif
}

// Function to convert degrees to radians
double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

// Function to draw a basic clock with hands for hour, minute, and second
void drawClock(int hour, int minute, int second) {
    const int radius = 10;  // Radius of the clock

    // Calculate angles for the hands (360 degrees divided by the number of divisions)
    double secondAngle = degreesToRadians(90 - 6 * second);  // Each second moves 6 degrees
    double minuteAngle = degreesToRadians(90 - 6 * minute);  // Each minute moves 6 degrees
    double hourAngle = degreesToRadians(90 - 30 * (hour % 12) - 0.5 * minute);  // Each hour moves 30 degrees

    // Coordinates of the clock hands
    int secondX = static_cast<int>(radius * cos(secondAngle));
    int secondY = static_cast<int>(radius * sin(secondAngle));

    int minuteX = static_cast<int>((radius - 2) * cos(minuteAngle));
    int minuteY = static_cast<int>((radius - 2) * sin(minuteAngle));

    int hourX = static_cast<int>((radius - 4) * cos(hourAngle));
    int hourY = static_cast<int>((radius - 4) * sin(hourAngle));

    // Draw the clock face and hands
    for (int y = -radius; y <= radius; ++y) {
        for (int x = -radius; x <= radius; ++x) {
            if (x == 0 && y == 0) {
                cout << "O";  // Center of the clock
            }
            else if (x == secondX && y == secondY) {
                cout << "S";  // Second hand
            }
            else if (x == minuteX && y == minuteY) {
                cout << "M";  // Minute hand
            }
            else if (x == hourX && y == hourY) {
                cout << "H";  // Hour hand
            }
            else if (x * x + y * y <= radius * radius) {
                cout << ".";  // Outline of the clock face
            } else {
                cout << " ";  // Empty space outside the clock
            }
        }
        cout << endl;
    }
}

// Main function to run the clock animation
int main() {
    while (true) {
        // Get the current time
        time_t now = time(0);
        tm *localTime = localtime(&now);

        int hour = localTime->tm_hour;
        int minute = localTime->tm_min;
        int second = localTime->tm_sec;

        // Clear the screen for each frame
        clearScreen();

        // Draw the clock with the current time
        drawClock(hour, minute, second);

        // Wait for one second before refreshing the screen
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
