#include<stdio.h>

float kmToMph(int k){
    float mph = 1.609344;
    float total =  k * mph;
    return total;
}



int main() {
    int distance;
    printf("Please enter KM to calculate MPH: ");
    scanf("%i", &distance);
    float result = kmToMph(distance);
    printf("There are %.2f miles in %i km", result, distance);


    return 0;
}
