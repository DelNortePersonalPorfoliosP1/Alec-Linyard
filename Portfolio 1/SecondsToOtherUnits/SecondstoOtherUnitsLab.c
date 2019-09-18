#include <stdio.h>

void secondsToOther(){

    int inputSecond;

    int days,hours,minutes,seconds;
    int remainingSeconds;

    const int secondsInHour = 60 * 60;
    int secondsInMinute = 60;
    int secondsInDay = 60 * 60 * 24;
    
    printf("Enter seconds : ");
    scanf("%d",&inputSecond);

    remainingSeconds = inputSecond;
    
    days = (remainingSeconds / secondsInDay);
    remainingSeconds -= days * secondsInDay;
    
    hours = (remainingSeconds / secondsInHour);
    remainingSeconds -= hours * secondsInHour;
    
    
    minutes = remainingSeconds / secondsInMinute;
    remainingSeconds -= minutes * secondsInMinute;
    
    seconds = remainingSeconds;
    

    
    printf("\n%d days, %d hours, %d minutes and %d seconds\n" ,days,hours,minutes,seconds);
    
}
