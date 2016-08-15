//
//  Bathroom.c
//  Heroes
//
//  Created by Andrew Barber on 8/14/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include "Bathroom.h"
#include "Actions.h"

void bathroom()

    {
    
        printf("Its a small bathroom with a tall ceiling. Bricks are found above the refurbished areas, showing a little style when you take a leak. There is a string hanging from the wall in the large stall hidden behind a pillar.\n\n");
        
        int action;
        fpurge(stdin);
        scanf("%d", &action);
        
        char *actionWord;
        
        switch (action) {
            case LookAround:
            {
                actionWord = "Pretty retro bathroom man.\n\n";
                break;
            }
            case Examine:
            {
                actionWord = "The string is a cotton string. You feel like pulling it...\n\n";
                break;
            }
            case Touch:
            {
                actionWord = "Pulling the string the wall opens up and swallows you into darkness.\n\n";
                break;
            }
            case Away:
            {
                actionWord = "You decide to check out a different room.";
                break;
            }
            default:
                printf("You can't do nothing to get out of this place");
                break;
        }
    
    }
