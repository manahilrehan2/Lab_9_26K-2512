
#include <stdio.h>

void printSensorData(void *ptr, char type){
    if (type == 'f')
    {
        printf("Temperature: %.2f Celsius\n", *(float *)ptr);
    }
    else if (type == 'i')
    {
        if (*(int *)ptr == 1)
        {
            printf("Motion Detected\n");
        }
        else if (*(int *)ptr == 0)
        {
            printf("No Motion\n");
        }
    }
    else if (type == 'c')
    {
        if (*(char *)ptr == 'O')
        {
            printf("Door Open\n");
        }
        else if (*(char *)ptr == 'C')
        {
            printf("Door Closed\n");
        }
    }
}

int main(){
    float temperature = 28.5;
    int motionStatus = 1;
    char doorStatus = 'C';

    printf("Smart Home Sensor Readings:\n\n");

    printSensorData(&temperature, 'f');

    printSensorData(&motionStatus, 'i');

    printSensorData(&doorStatus, 'c');

    return 0;
}
