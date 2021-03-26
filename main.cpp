//
//  main.cpp
//  Assignment_5
//
//  Created by Noah Honickman on 1/30/21.
//This program asks you to enter total number of books sold each month and give the total
//number sold in a year.

#include <iostream>
#include <array>

using namespace std;
int main() {
    int arr[12];
    int i = 0;
    while (i< 12){
        int a;
        cout << "Enter the number of books sold for this month. \n";
        cin >> a;
        arr[i] = a;
        i ++;
    }
    int total = 0;
    for (int i = 0; i < 12; i ++){
        total = total + arr[i];
        cout << total<< "\n";
       // cout<< "Hello \n" ;
    }
    
    cout << " The total number of books sold is " << total << "\n";
    
    return 0;
}
