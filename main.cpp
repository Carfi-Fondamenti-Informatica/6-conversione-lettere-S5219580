#include <iostream>
#include "riconoscimento.h"
using namespace std;

int main(){
    char input=0;
    bool ris=0;
    cin>> input;
    riconoscimento(input, ris);
    if (ris==true){
        cout<<"True"<<endl <<input;
    }
    else{cout<<"False";}
    return 0;
}
