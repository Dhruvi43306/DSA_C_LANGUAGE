// WAP TO CALCULATEAN ANGLE BETWEEN HOURE AND MINUTE HAND.
// (HOURE AND MINUTE SHOULD BE TAKEN FOR USER.)

#include<stdio.h>
#include<math.h>
void main(){
    float houre_angle,minute_angle,angle;
    int houre,minute;

    printf("Enter a Houre:");
    scanf("%d",&houre);
    printf("Enter a Minute:");
    scanf("%d",&minute);

    if(houre == 12)
    houre = 0;

    houre_angle = (houre + minute/60.0)*30;
    minute_angle = minute*6;

    angle = fabs(houre_angle - minute_angle);

    if(angle > 180){
        angle = 360 - angle;
    }

    printf("Angle = %.2f degrees",angle);



}