#include <iostream>
#include "functions.h"
using namespace std;

void prodprmult(atb &tsina, int kil) {
    
    int convtsin = tsina.gryvna * 100 + tsina.kopyika;
    
    convtsin = convtsin * kil;
    
    tsina.gryvna = convtsin / 100;
    
    tsina.kopyika = convtsin % 100;
}

void  prodprsum(atb &tsina1, atb tsina2) {
    
    tsina1.gryvna += tsina2.gryvna;
    tsina1.kopyika += tsina2.kopyika;
    
    

    if (tsina1.kopyika >= 100) {
        
        tsina1.gryvna++;
        
        tsina1.kopyika -= 100;
    }

}

void pround(atb &sum) {
    
    if (sum.kopyika % 10 >= 5) {
        
        sum.kopyika = ((sum.kopyika / 10) + 1) * 10;
        
    } else {
        
        sum.kopyika = (sum.kopyika / 10) * 10;
    }
    
    if (sum.kopyika >= 100) {
        
        sum.gryvna++;
        
        sum.kopyika = sum.kopyika - 100;
    }
    
}

void print(atb sum) {
    
    
    cout << "Sum: " << sum.gryvna << "." << sum.kopyika << " uah" << endl;
    
    pround(sum);
    
    cout << "Rounded Sum: " << sum.gryvna << "." << sum.kopyika << " uah" << endl;
}