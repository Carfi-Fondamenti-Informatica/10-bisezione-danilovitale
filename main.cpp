#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x , double &fx)
{
    fx = x * x * cos(x) + 1;
    return fx;
}

int main() {
double a=0,b=0,fx=0,x=0,err=2;
int g=0;
while(f(a,fx)*f(b,fx)>=0) {
    cout <<"inserire estremi"<<endl;
    cin >> a >> b;

    if (f(a,fx)*f(b,fx) < 0){
        break;
    }
}

while (f(x,fx)!=0) {
    x=(a+b)/2;
        if (f(x, fx) * f(b, fx) < 0) {
            a = x;
        }
        else{
        b = x;
        }
    err = abs((a - b)) / 2;
        if (err < 1e-6){
            break;}
}

cout <<   setprecision(5)<< x;




return 0;



}
