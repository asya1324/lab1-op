#include <iostream>
#include "functions.h"
using namespace std;



atb prodprmult(atb tsina, int kil) {
    
    int convtsin = tsina.gryvna * 100 + tsina.kopyika;
    
    convtsin = convtsin * kil;
    
    tsina.gryvna = convtsin / 100;
    
    tsina.kopyika = convtsin % 100;

    return tsina;
}

atb prodprsum(atb tsina1, atb tsina2) {
    
    
    atb sum;
    
    sum.gryvna = tsina1.gryvna + tsina2.gryvna;
    
    sum.kopyika =tsina1.kopyika + tsina2.kopyika;
    
    

    if (sum.kopyika >= 100) {
        
        sum.gryvna++;
        
        sum.kopyika = sum.kopyika - 100;
    }

    return sum;
}

atb pround(atb sum) {
    
    if (sum.kopyika % 10 >= 5) {
        
        sum.kopyika = ((sum.kopyika / 10) + 1) * 10;
        
    } else {
        
        sum.kopyika = (sum.kopyika / 10) * 10;
    }
    
    if (sum.kopyika >= 100) {
        
        sum.gryvna++;
        
        sum.kopyika = sum.kopyika - 100;
    }
    
    return sum;
}

void print(atb sum) {
    
    
    cout << "Sum: " << sum.gryvna << "." << sum.kopyika << " uah" << endl;
    
    cout << "Rounded Sum: " << pround(sum).gryvna << "." << pround(sum).kopyika << " uah" << endl;
}