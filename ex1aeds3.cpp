#include <iostream>
using namespace std;

void changePositions (int* vector , int position , int size , int quantity) {
    for (int i = position; i < size; i++) {
    vector[i+1] = vector[i];
    }
}

void initiateVector (int* vector , int position , int size , int quantity) {
    for (int i = 0; i < size; i++) {
        vector[i] = 0;
    }
}

void fillVector (int* vector , int position , int size , int quantity) {
for (int i = 0; i < size; i++) {
    cout << "Type the position you want to insert your information: " << endl;
    cin >> position;    

    if (vector[position] == 0) {
    cout << "Type in your information: " << endl;
    cin >> vector[position];
    }
    else {
    changePositions(vector, position, size, quantity);
    cout << "Type in your information: " << endl;
    cin >> vector[position];
    }
    
    }
}

int main () {
int* vector;
int size;
int quantity;
int position;

    cout << "Inform the size of the vector: " << endl;
    cin >> size;

vector = new int [size];

initiateVector(vector, position, size, quantity);
fillVector (vector, position, size, quantity);
cout << endl;
cout << "Vector: " << endl;
for (int i = 0; i < size; i++) {
    if (i != size-1)
    cout << vector[i] << ", ";

    else 
    cout << vector[i];
}
}


