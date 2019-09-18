//
//  main.c
//  labcelsiustofahrenheit
//
//  Created by Alec Linyard on 9/11/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>

void celsiusToFahrenheit(void)
{
    double fahrenheitValues[4];
    int i;
    
    for (i = 0; i < 4; i++) {
        printf("Enter a Fahrenheit Temperature:");
        scanf("%lf", &fahrenheitValues[i]);
    }
    
    printf("Fahrenheit\t   Celsius\t FtoFreeze\t CtoFreeze\n");
    
    for (i = 0; i < 4; i++) {
        double celsius = ((fahrenheitValues[i] - 32) / (1.8));
        
        printf("%10.2lf\t%10.2lf\t%10.2lf\t%10.2lf\n", fahrenheitValues[i], celsius, fahrenheitValues[i]-32, celsius);
    }
}
