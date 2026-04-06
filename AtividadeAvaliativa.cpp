#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Dupla : Isaque Keller e Jose Marcio Domiciano

void print_array(int *s, int n) {
    for (int i = 0; i < n; i++){
    	cout << s[i] << ",";
	}
        
}

void swap(int *s, int j, int k) {
    int temp = s[j];
	s[j] = s[k];
	s[k] = temp;
}

void insertion_sort_duplo(int *s, int n){

    int i = 0, j = 0;
    for (i=1; i<n; i+=2) {
        j=i;
    	while ((j>0) && (s[j] < s[j-1])) {
            swap(s, j, j-1);
            j = j-1;
        }
        j = i;
        if (i != n-1) {
		
    		while ((j>=0) && (s[j + 1] < s[j])) {
            	swap(s, j+1, j);
            	j = j-1;
        	}
    	}
    }
}

int main () {
	int *vector;
	int quantity = 0;
	cout << "Enter the quantity: " << endl;
	cin >> quantity;
	vector = new int [quantity];
	cout << "----------------" << endl;
	for (int i = 0; i < quantity; i++) {
		cout << "Enter a number: "  << endl;
		cin >> vector[i];
	}
	insertion_sort_duplo (vector , quantity);
	print_array(vector , quantity);
}
