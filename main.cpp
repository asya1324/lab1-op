#include <iostream>
#include <stdio.h>
#include "functions.h"
using namespace std;

int main() {
    atb tsina;

    atb sum = {0,0};
    
    int kil;

    FILE *product;

    product = fopen("product.txt", "r");

    if(product){


        while(fscanf(product, "%d %hi %d", &tsina.gryvna, &tsina.kopyika, &kil) == 3) {

            prodprmult(tsina, kil);

            prodprsum(sum, tsina);
            
        }

        fclose(product);
    
        print(sum);

    }
    
    return 0;
}