#include <iostream>
using namespace std;

// Function to calculate the third angle of a triangle
int ThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;

    // Input the two angles
    cout << "Enter first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter second angle of the triangle: ";
    cin >> angle2;

    // Calculate and output third angle
    int thirdAngle = ThirdAngle(angle1, angle2);
    cout << " Third angle of the triangle is: " << thirdAngle << " degrees" << endl;

    return 0;
}