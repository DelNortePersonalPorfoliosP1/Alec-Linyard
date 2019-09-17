//
//  main.c
//  SquareLab
//
//  Created by Alec Linyard on 9/12/19.
//  Copyright © 2019 Alec Linyard. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int sideOne;
    int sideTwo;
    
    printf("Input the first side of the rectangle:");
    scanf("%d", &sideOne);
    printf("Input the second side of the rectangle:");
    scanf("%d", &sideTwo);
    
    int perimeter = ((2 * sideOne) + (2 * sideTwo));
    int area = (sideOne * sideTwo);
    
    printf("Side One %8.2\tSide Two %8.2\tPerimeter %8.2\tArea\n");
    printf("%5.2d\t %16.2d\t %16.2d\t %14.2d\t\n", sideOne, sideTwo, perimeter, area);
    
    
    
    return 0;
}
