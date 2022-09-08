#include<iostream>
#include<string.h>

using std::cout;
using std::endl;
using std::scientific;

float machinePrecisionSimple();
double machinePrecisionDouble();

int main(){
    float sprec = machinePrecisionSimple();
    double dprec = machinePrecisionDouble();
    cout.precision(7);
    cout << "Simple Precision: " << scientific << sprec << endl;
    cout.precision(16);
    cout << "Double Precision: " << scientific << dprec << endl;
    // cout << 1.0 - dprec << " " << 1.0 << " " << 1.0 + dprec;

}

float machinePrecisionSimple(){
    float A = 17893;
    float s = 35786;
    while (s > 17893){
        A = A/2;
        s = 17893 + A;
    } 
    return A*2;
}

double machinePrecisionDouble(){
    double A = 17893;
    double s = 35786;
    while (s > 17893){
        A = A/2;
        s = 17893 + A;
    } 
    return A*2;
}