#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

double minimal(double a, double b);

int main() {
    cout<<"Dankov Artem,IS-01,27-V"<<endl;
    double a,b,u,v,w;
    cout<<"Put first digit a: ";
    cin>>a;
    cout<<"Put second digit b: ";
    cin>>b;
    u=minimal(a,b);
    v=minimal(a*b,a+b);
    w=minimal(u+v*v,M_PI);
    cout<<"U="<<u<<endl;
    cout<<"V="<<v<<endl;
    cout<<"W="<<w<<endl;
    return 0;
    }
double minimal(double a,double b)
{
double min=0;
if(a<b) min=a;
else min=b;
return min;
}
