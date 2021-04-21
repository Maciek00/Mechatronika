//
//  main.cpp
//  Program 5.15 XLI
//
//  Created by Maciej Kopec on 13/08/2020.
//  Copyright © 2020 Maciej Kopec. All rights reserved.
//

#include <iostream>
using namespace std;

void binarnie(int n);
int main() {
    cout << "Jaką liczbę dziesiętną chcesz zapisać w sposób binarny?\n";
    int liczba=1;
    cin >> liczba;
    
    cout << liczba << " zapisane binarnie to ";  binarnie(liczba);
    cout << " .\n";
}

void binarnie( int n ){
    int reszta = n % 2;
    static int krok;
    krok++;
    
    if(n > 1) binarnie(n/2);
    if(!(krok % 4)) cout << " ";
    krok--;
    cout << reszta;
    return;
}
