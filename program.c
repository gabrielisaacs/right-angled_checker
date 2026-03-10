#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);

    if (angle1 <=0 || angle2 <= 0 || angle3 <= 0){
        printf("The triangle is not valid. \nYou can't have a triangle with an angle less than or equal to 0 (zero).\n");
    } else if(angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is right-angled.\n");
    } else {
        printf("The triangle is not right-angled.\n");
    }

    return 0;
}
