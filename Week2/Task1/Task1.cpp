#include <iostream>
#include <cmath>

using namespace std;

struct Triangle{
    int a;
    int b;
    int c;
};

int calculatePerimeter(const Triangle& triangle){
    return triangle.a + triangle.b + triangle.c;
}

double calculateArea(const Triangle& triangle){
    double p = (double)calculatePerimeter(triangle)/2;
    return sqrt(p*sqrt(p-triangle.a)*sqrt(p-triangle.b)*sqrt(p-triangle.c));
}

int main(){
    Triangle myTriangle;
    cout << "Enter the sides of the triangle: " << endl;
    cout << "a = ";
    cin >> myTriangle.a;
    cout << "b = ";
    cin >> myTriangle.b;
    cout << "c = ";
    cin >> myTriangle.c;
    cout << endl << "The perimeter of the triangle you have entered is: " << endl << calculatePerimeter(myTriangle) << endl;
    cout << "And the area is: " << endl << calculateArea(myTriangle) << endl;
}
