#include <iostream>
#include <cmath>  
using namespace std;

const double PI = 3.1416;

//x1,y1 dianggap sebagai centar smeentara 
//x2,y2 dianggap sebagai titik pada lingkaran

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//karena x1y1 center dan x2y2 adalah titik pada lingkaran maka 
//diameter lingkaran adalah jaraknya itu
double radius(double xCenter, double yCenter, double xPoint, double yPoint) {
    return distance(xCenter, yCenter, xPoint, yPoint);
}

double circumference(double r) {
    return 2 * PI * r;
}

double area(double r) {
    return PI * pow(r, 2);
}

int main() {
    double xCenter, yCenter, xPoint, yPoint;
    
    cout << "Enter the center of the circle (x1 y1): ";
    cin >> xCenter >> yCenter;
    
    cout << "Enter a point on the circle (x2 y2): ";
    cin >> xPoint >> yPoint;

    double r = radius(xCenter, yCenter, xPoint, yPoint);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);
    
    cout << fixed;
    cout.precision(4);
    
    cout << "\nResults:\n";
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;
    
    return 0;
}
