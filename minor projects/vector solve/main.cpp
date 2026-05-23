#include <iostream>

using namespace std;

int main() {
    cout << "=== Engineering Vector Math Solver ===" << endl;
    
    double x1, y1, z1;
    double x2, y2, z2;

    // Get Vector 1
    cout << "Enter Vector 1 coordinates (x y z separated by spaces): ";
    cin >> x1 >> y1 >> z1;

    // Get Vector 2
    cout << "Enter Vector 2 coordinates (x y z separated by spaces): ";
    cin >> x2 >> y2 >> z2;

    // The Math
    double dotProduct = (x1 * x2) + (y1 * y2) + (z1 * z2);

    // The Output
    cout << "\n--- Results ---" << endl;
    cout << "Dot Product: " << dotProduct << endl;
    // this is a change on github

    return 0;
}
