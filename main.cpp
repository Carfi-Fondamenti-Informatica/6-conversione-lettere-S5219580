#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char input=0;
    bool ris=0;
    cin>> input;
    lib(input, ris);
    if (ris==true){
        <<input;
    }
    else{cout<<"errore";}
    return 0;
}
