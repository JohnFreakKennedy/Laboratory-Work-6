#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;


double U(double a,double b)
{
if(a<b) return a;
else return b;
}

double V(double a,double b)
{
if(a*b<a+b) return a*b;
else return a+b;
}

double W(double a,double b)
{
double c = U(a,b)+V(a,b)*V(a,b);
if (c<M_PI) cout<<c;
else cout<<M_PI;
}

int main() {
    double a,b;
    cout<<"Put first digit a: ";
    cin>>a;
    cout<<"Put second digit b: ";
    cin>>b;
    W(a,b);
    return 0;
    }


