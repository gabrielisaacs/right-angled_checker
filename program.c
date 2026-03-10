/*
This is a program to input two angles of a triangle and 
check whether the triangle is a right-angled triangle or not.

-------------------------------------------------------------
PROGRAM PSEUDO CODE

START
    INPUT angle1, angle2
    COMPUTE angle3 = 180 - (angle1 + angle2)
    IF angle1 <= 0 OR angle2 <= 0 OR angle3 <= 0
        PRINT “Triangle is invalid”
    ELSE IF angle1 == 90 or angle2 == 90 or angle3 == 90
        PRINT “Triangle is right-angled”
    ELSE
        PRINT “Triangle is not right-angled”
    END IF
STOP
*/

#include <stdio.h>

int main() {
    int angle1, angle2, angle3; // declares the 3 angles required as integers

    printf("Enter first angle: "); // asks user to make input for the first angle
    scanf("%d", &angle1);

    printf("Enter second angle: "); // asks user to make input for the second angle
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2); // computation to determine the value of the third angle since sum of angles in a triangle totals 180 degrees

    // since there is no triangle with an angle = zero or less, zero value means invalid
    if (angle1 <=0 || angle2 <= 0 || angle3 <= 0){
        printf("The triangle is not valid. \nYou can't have a triangle with an angle less than or equal to 0 (zero).\n");
    
    // any angle that equals 90 means the triangle is right-angled. Let's capture this in an else if statement
    } else if(angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is right-angled.\n");

    // if the else if statement above is not true, the triangle is not right-angled, hence let's use an else to print that the triangle is not right-angled
    } else {
        printf("The triangle is not right-angled.\n");
    }

    return 0;
}
