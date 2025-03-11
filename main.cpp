#include <iostream>
#include <stdio.h>
#include "functions.h"
using namespace std;
    
    

atb prodprmult(atb tsina, int kil);
atb prodprsum(atb grnfinal1, atb grnfinal2);
atb pround(atb sum);
void print(atb sum);


int main() {
    
    
    atb tsina;

    atb sum = {0,0};
    
    int kil;

    FILE *product;

    product = fopen("product.txt", "r");

    if(product){


        while(fscanf(product, "%d %hi %d", &tsina.gryvna, &tsina.kopyika, &kil) == 3) {

            tsina = prodprmult(tsina, kil);

            sum = prodprsum(sum, tsina);
            
        }

        fclose(product);
    
        print(sum);

    }
    
    return 0;
}