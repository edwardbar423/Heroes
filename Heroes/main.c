//
//  main.c
//  Heroes
//
//  Created by Andrew Barber on 8/9/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    void sunroom ();
    void office ();
    void classroom ();
    void bathroom ();
    void staircase ();
    void secretroom ();
    
    int action = 0;
    int rubeyes = 1;
    int cough = 2;
    int makeCoffee = 3;
    int bathroomBreak = 4;
    int stretch = 5;
    int lookOutWindow = 6;
    
    printf("Late night. Check your phone, no messages and your battery is at 34 Percent.\n");
    printf("You...\n Rubeyes               :1\n Cough                 :2\n Make some coffee      :3\n Take a bathroom break :4\n");
    printf(" Stretch               :5\n Look out the window   :6\n ?: ");
    
    while(action < 1 || action > 6) {
        fpurge(stdin);
        scanf("%d", &action);
    }
    
    if(action = 1) {
        printf("Eyes sore, weary. The work is great but sometimes... it would be nice if it was just finished.");
    }
    if(action = 2) {
        printf("You cough, hoarse. Not really sure what brought that on. Is there a need for concern?");
    }
    if(action = 3) {
        printf("You get up and make some coffee. 'Hey!' You tell yourself, 'it gets me through the nights.'");
    }
    if(action = 4) {
        printf("Get that urge again, nature calls");
        //Something needs to go here to signify you head to the "Bathroom - room".
    }
    if(action = 5) {
        printf("Reach up high, giving the stiff muscles a flex.");
    }
    if(action = 6) {
        printf("Atlanta may not be the biggest city, but that doesn't mean it lacks beauty.");
    }
    return 0;
}
