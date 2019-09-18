//
//  main.c
//  Portfolio 1
//
//  Created by Alec Linyard on 9/18/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>
#include "CelsiusToFahrenheit/CelsiusToFahrenheitLab.h"
#include "DataTypesIOLab/DataIOLab.h"
#include "Pythagorean Theorem/PythagoreanLab.h"
#include "SecondsToOtherUnits/SecondsToOtherUnits.h"
#include "SquareLab/SquareLab.h"

int main(int argc, const char * argv[]) {
    
    int choice;
    
    do {
    
        printf("Which Lab Do You Want To Run?\n");
        printf("\t1. celsius to fahrenheit\n");
        printf("\t2. Data IO\n");
        printf("\t3. Pythagorean\n");
        printf("\t4. Seconds To Other Units\n");
        printf("\t5. Square\n");
        printf("\t0. QUIT\n");
        
        scanf("%d", &choice);
        
        if (choice == 1) {
            celsiusToFahrenheit();
        } else if (choice == 2) {
            dataIO();
        } else if (choice == 3) {
            pythagorean();
        } else if (choice == 4) {
            secondsToOther();
        } else if (choice == 5) {
            squareLab();
        } else if (choice != 00) {
            printf("Bad Choice\n");
        }
    } while (choice != 0);
    
    return 0;
}
