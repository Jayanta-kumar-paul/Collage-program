#include <iostream>
using namespace std;

// Function to compute the area and circumference of a circle
void Circle(int radius, double& area, double& circumference) 
{
    double pi = 3.14;  // Define the value of π (use double for more precision)
    area = pi * radius * radius;  // Calculate area
    circumference = 2 * pi * radius;  // Calculate circumference
}

int main() {
    int radius;
    double area, circumference;  // Use double for more precision

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle(radius, area, circumference);

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
