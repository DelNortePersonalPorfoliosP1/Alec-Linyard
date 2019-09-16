//
//  main.c
//  Pythagorean Theorem
//
//  Created by Alec Linyard on 9/10/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int sideone;
    int sidetwo;
    
    printf("Enter the First Value\n");
    scanf("%d", &sideone);
    printf("Enter the Second Value");
    scanf("%d", &sidetwo);
    
    float sidethree = (sqrt(sideone * sideone + sidetwo * sidetwo));
    
    printf("%f", sidethree);
    return 0;
}
