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
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;




int main() {
    cout<<"Dankov Artem,IS-01,27-V";
    double a,b;
    double U(double a,double b);
    double V(double a,double b);
    double W(double a, double b);
    cout<<"Put first digit a: ";
    cin>>a;
    cout<<"Put second digit b: ";
    cin>>b;
    W(a,b);
    return 0;
}
double U(double a,double b)
{
    double min=0;
    if(a<b) {
        min=a;
        return min;
    }
    else {
        min=b;
        return min;
        cout<<"U="<<b<<endl;
    }
}

double V(double a,double b)
{
    double min=0;
    if(a*b<a+b) {
        min=a*b;
        return a*b;
        cout<<"V="<<a*b<<endl;
    }
    else {
        min=a+b;
        return a+b;
        cout<<"V="<<a+b<<endl;
    }
}

void W(double a,double b)
{
    cout<<"U="<<U(a,b)<<endl;
    cout<<"V="<<V(a,b)<<endl;
    double min;
    double c = U(a,b)+V(a,b)*V(a,b);
    if (c<M_PI) {
        min=c;
        cout<<"W="<<c;
    }
    else {
        min=M_PI;
        cout<<"W="<<M_PI;
    }
}
