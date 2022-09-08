#include<iostream>
#include<cmath>

using std::cout;
using std::pow;
using std::exp;

// int fatorial(int);
void taylor(double, int);

int main(){
    taylor(1, 1000);
}

void taylor(double x, int n){
    if (x < 0){
        cout << 1.0 / exp(-x);
    }
    else {
        double soma = 1;
        double temp = 1;
        cout.precision(17);
        for (int i=1; i<n+1; i++){
            temp *= x/i;
            soma += temp;
        }
        cout.precision(18);
        cout << soma;
    }
}