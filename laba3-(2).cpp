#include <iostream>


using namespace std;

int main(){
    double x;
    double a;
    double b;
    double c;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    if (x < 0 && b != 0){
        F = -a * x * x + b;
    }
    else if (x > 0 && b == 0){
        F = (x / (x - c)) + 5.5;
    }
    else{
         F = x / -c;
    }

    cout << endl;
    cout << "1) F = " << F << endl;

    return 0;
}
