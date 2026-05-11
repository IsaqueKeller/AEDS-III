#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//x³ - x - 2

double f_of_x (double x) {
    return ((pow(x , 3)) - x - 2);
}

double find_root (double low , double high) { //low = x1 high = x2
    if (low > high) {
        return -99999;
    }
    double middle = (low + high)/2;
 
    double answer = f_of_x(middle);
        if (answer <= 0.0001 && answer >= -0.0001) {
            return middle;
        }

        else if (f_of_x(middle) * f_of_x(low) < 0){ //left side
            return find_root (low , middle);
            
        }
        else {
            return find_root (middle , high); //right side
        }
}




int main () {
    double raiz = find_root (0, 2);

    cout << setprecision(5) << raiz << endl;
}
