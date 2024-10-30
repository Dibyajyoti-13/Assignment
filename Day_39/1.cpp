#include <iostream>
using namespace std;

double pow(double x,int n){
    double result=1;
    while (n > 0) {
        if (n % 2 == 1) result *= x; 
        x *= x; 
        n /= 2; 
    }
    return result;
}

void print(double x){
    cout << "Total Energy is ";
    const double EWh = pow(10, 18);
    const double PWh = pow(10, 15);
    const double TWh = pow(10, 12);
    const double GWh = pow(10, 9);
    const double MWh = pow(10, 6);

    if (x > EWh) cout  << x / EWh << " EWh";
    else if (x > PWh) cout << x / PWh << " PWh";
    else if (x > TWh) cout << x / TWh << " TWh";
    else if (x > GWh) cout << x / GWh << " GWh";
    else if (x > MWh) cout << x / MWh << " MWh";
    else cout << x << " kWh";
}

int main(){
    int days;
    double energy;
    cout<<"Enter energy generated everyday: ";
    cin>>energy;
    cout<<"Enter number of days solar panel will operate: ";
    cin>>days;
    print(pow(energy,days));
    return 0;
}