//
//  main.cpp
//  Random Number Gen 4 DLL
//
//  Created by Steven Payne on 11/3/17.
//  Copyright © 2017 Steven Payne. All rights reserved.
//
//  DLL tester

#include <iostream> // print commands
#include <stdlib.h> //srand, rand
#include <time.h> //time

using namespace std;

int main(int argc, const char * argv[]) {
    
    int number,f; //number is an integer
    
    cout << "Hello! please indicate how many numbers you would like!" << endl;
    
    cin >> f;
    
    cout << "\n" << endl;
    
    while(0 < f){
        
        number = rand() % 1000 + 1; //creating random number between
        cout << " 1 " << number; //idicate operation to test
        f = f - 1; //loop decrement
    }
    cout << "\n" << endl;
    
    return 0;
}
