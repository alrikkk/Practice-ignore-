#include <stdio.h>
#include <stdbool.h>

int main() {
    bool m1,m2,m3; // motion sensor
    bool d1,d2; // door 
    bool w; // window
    
    m1,m3,d1 = true; // motion detected
    m2,d2,w = false; // no motion detected  

    int motioncount = m1 + m2 + m3; // count of motion sensors triggered
    bool anyDoorOpen = d1 || d2; // door status (opened or closed)
    bool alarmCondition1 = (motioncount >= 2) && anyDoorOpen; // alarm condition based on motion and door status
    bool alarmCondition2 = (motioncount >= 1) && w; // alarm condition based on motion and window status
    bool alarmCondition3 = (motioncount == 3); 
    bool triggerAlarm = alarmCondition1 || alarmCondition2 || alarmCondition3;

    if (triggerAlarm) {
    
        printf("Alarm triggered!\n");
        printf("Sending Notification to security..\n");
    } else {
        printf("System Secure.\n");
    }

    return 0;
 }
