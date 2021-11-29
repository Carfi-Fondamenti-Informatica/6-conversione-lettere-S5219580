
#include "lib.h"
void lib(char &a,bool &ris){
    if (a<91&&a>64) {
        ris=true;
        a=a+32;}
    else if(a<123&&a>96){
        ris=true;
        a=a-32;
    }
    else {ris=false;}
}
