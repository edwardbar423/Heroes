//
//  Sunroom.c
//  Heroes
//
//  Created by Andrew Barber on 8/14/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "Sunroom.h"
#include "Bathroom.h"

void sunroom() {
    
    int isInSunRoom = 1;
    
    printf("Late night. Check your phone, no messages and your battery is at 34 Percent.\n");
    
    while (isInSunRoom == 1) {
    
        printf("You...\n Rubeyes               :1\n Cough                 :2\n Make some coffee      :3\n Take a bathroom break :4\n");
        printf(" Stretch               :5\n Look out the window   :6\n Leave the sun room    :10\n\n ?: ");
        
        int action;
        fpurge(stdin);
        scanf("%d", &action);
        
        char *actionWord;
        
        switch (action)
        {
            case(Rubeyes):
            {
                
                actionWord = "Eyes sore, weary. The work is great but sometimes... it would be nice if it was just finished.";
                break;
                
            }
            case(Cough):
            {
                actionWord = "You cough, hoarse. Not really sure what brought that on. Is there a need for concern?";
                break;
            }
            case(MakeSomeCoffee):
            {
                actionWord = "You get up and make some coffee. 'Hey!' You tell yourself, 'it gets me through the nights.\n";
                    fpurge(stdin);
                bathroom();
                break;
            }
            case(TakeABathroomBreak):
            {
                actionWord = "Get that urge again, nature calls!\n";
                    fpurge(stdin);
                bathroom();
                break;
            }
            case(Stretch):
            {
                actionWord = "Reach up high, giving the stiff muscles a flex.\n";
                break;
            }
            case(LookOutTheWindow):
            {
                actionWord = "Atlanta may not be the biggest city, but that doesn't mean it lacks beauty.\n";
                break;
            }
            case(ExitSunRoom):
                isInSunRoom = 0;
                actionWord = "You skip out of the sun room. \n";
                
            default:
                printf("What to do...\n");
        
        } // end switch
        
        printf("%s \n\n\n", actionWord);
        
    } // end while loop
}
