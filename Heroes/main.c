//
//  main.c
//  Heroes
//
//  Created by Andrew Barber on 8/9/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
    
    if(action == 1) {
        printf("Eyes sore, weary. The work is great but sometimes... it would be nice if it was just finished.");
    }
    if(action == 2) {
        printf("You cough, hoarse. Not really sure what brought that on. Is there a need for concern?");
    }
    if(action == 3) {
        printf("You get up and make some coffee. 'Hey!' You tell yourself, 'it gets me through the nights.'");
    }
    if(action == 4) {
        printf("Get that urge again, nature calls");
        //Something needs to go here to signify you head to the "Bathroom - room".
    }
    if(action == 5) {
        printf("Reach up high, giving the stiff muscles a flex.");
    }
    if(action == 6) {
        printf("Atlanta may not be the biggest city, but that doesn't mean it lacks beauty.");
    }
    
    
    //Sleep doesn't seem to be working. Look at for review.
    printf("BOOM, keeeeeeerrrrrrr, RrrrreeedrrrrRRRrruUUumMMmmm.");
    sleep(3);
    printf("The building shakes and rocks, followed by a loud boom");
    sleep(3);
    printf("'What was that?' you say, shaken. Catching yourself from having to fall to the floor");
    sleep(3);
    printf("The lights flicker and blink, then go out. Leaving you in darkness at The Iron Yard.");
    sleep(3);
    printf("With grimace you turn on the flashlight function on your phone. Noticing that you no longer have signal you turn your phone to airplane mode.");
    sleep(3);
    printf("Waiting for a moment you get your barings");
    sleep(3);
    
    
    
    
    
    
    
    
    
    //Some pause for dramatic effect here...
   // int action()
    //{
     //   system("read -n 1 -s -p \"Press any key to continue...\"");
      //  return 0;
    //}
    
    
    
    //#include <stdio.h>
    //#include <conio.h>
    //int main() {
    //Your Code
    //getch();
    //return 0;
    //}
    
    // also
    
    //#include <stdlib.h>
    //int main() {
    //system("read -n 1 -s -p \"Press any key to continue...\"");
    //return 0;
    //}
    
    
    return 0;
}
