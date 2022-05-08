#include<iostream>
#include "lib.h"
using namespace std;

int main (){
    char carattere[1];
    for ( int i=0; i<1 ; i++){
        cin >> carattere[i];
    }
    if ( controllo(carattere[0]) == 1 ){
        cout << conversione(carattere[0])<< endl;
    } else {
        cout << "errore" << endl;
    }
    return 0;
} 

