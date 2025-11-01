#include <iostream>
#include <cmath> 
using namespace std;

double euclideanDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

int main() {
    double x1, y1, x2, y2;

    // Input titik di 2 dimensi
    cout << "Masukkan titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan titik kedua (x2 y2): ";
    cin >> x2 >> y2;

    // Nilai yang dikirim ke fungsi
    double result = euclideanDistance(x1, y1, x2, y2);

    cout << "Jarak Euclidean antara (" << x1 << "," << y1 << ") dan (" 
         << x2 << "," << y2 << ") adalah: " << result << endl;

    return 0;
}
