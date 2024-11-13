#include <iostream>
using namespace std;

void Circle(int radius, double &area, double &circumference)
{
    double pi = 3.14;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
}

int main()
{
    int radius;
    double area, circumference;

    cout << "Enter the radius of the circle: ";  
    cin >> radius;

    Circle(radius, area, circumference);

    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}
// Enter the radius of the circle: 5
// Area of the circle: 78.5
// Circumference of the circle: 31.4
