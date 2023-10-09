#include <stdio.h>
#include <stdlib.h>
#include "cat_game.h"
#include "death.c"

void story()
{
	char choice;
	
        printf("your fur bristles. you find yourself alone in an unfamiliar room");
        printf("\na hint of moonlight filters in from the small window above");
        getchar();
        printf("\nyou find yourself trembling, tucked into a corner");
        getchar();
        printf("\nwhere have you been taken?");
        printf("\nhow will you find your way to your family?");
        getchar();
        printf("\na deep longing fills your heart as you stare at the moon");
        getchar();
        printf("\nyour eyes adjust to the darkness, and you see a door with a long, protruding handle\n");
        getchar();
        printf("\nwhat do you do?\n");
        printf("\na. try to open the door"); // one
        printf("\nb. jump through the small window\n"); // two
        putchar('\n');

        scanf("%c", &choice);

        if (choice == 'a') // one
        {
		getchar();
                printf("\nyou jump up towards the handle and wrap your paws around it");
                printf("\ntriumphantly, you meow");
                getchar();
                printf("\nbut the success is short-lived as your paws begin to slip");
                getchar();
                printf("\nyou are too small to move the handle");
                getchar();
                printf("\nyou crash into the table beside the door");
                printf("\nHUMAN things scatter off its surface and careen towards the floor");
                getchar();
                printf("\nthe dust settles, and suddenly you feel the floor thudding beneath you");
                getchar();
                printf("\nyour stomach sinks, your captor nears");
                getchar();
                putchar('\n');
                printf("\nwhat do you do?\n");
                printf("\na. attack the HUMAN"); // three
                printf("\nb. hide, then bolt through the door when it opens\n"); // four
                putchar('\n');

                scanf("%c", &choice);

                if (choice == 'a') // three
                {

                        getchar();
			printf("\nthe HUMAN opens the door");
                        getchar();
                        printf("\nyou lunge at its ankles with your claws outsretched");
                        printf("\nyou are too small to harm the HUMAN");
                        printf("\nin an attempt to release itself from your grip, it kicks you into the wall");
                        getchar();
                        printf("\nthe pain is great, and your vision grows hazy");
                        printf("\nit cradles you in its arms");
                        getchar();
                        printf("\nas death beckons, you realize the HUMAN is sad... ");
                        getchar();
                        printf("\ntears fall from its eyes");
                        getchar();
			putchar('\n');
                        printf("YOU DIED\n");

			decoration(); // function that adds frilly tehe decoration

			death(); // function that moves user to the beginning of the story
                }
                else if (choice == 'b') // four
                {
                        getchar();
			printf("\nthe HUMAN opens the door");
                        getchar();
                        printf("\nfrom beneath the table, you see its feet, slowly moving into the room");
                        getchar();
                        printf("\nsounds escape from its mouth, things you do not understand");
                        getchar();
                        printf("\n'oreo, where are you, baby?'");
                        printf("\noreo? what does that mean?");
                        getchar();
                        printf("\nyou decide this is what the HUMAN calls you, and your blood boils");
                        getchar();
                        printf("\nyou slink through the door into the room beyond");
                        printf("\nthe human did not hear you leave");
                        getchar();
                        printf("\nthis room is larger, and well lit by a lamp beside the HUMAN's bed");
                        getchar();
                        printf("\nfrom behind you, commotion stirs");
                        printf("\nit seems the HUMAN realizes you are missing");
                        getchar();
                        printf("\nyou must think fast...");
                        getchar();
                        printf("\nyou see a door ajar on the opposite side of the room");
                        getchar();
                        putchar('\n');
                        printf("\nwhat do you do?\n");
                        printf("\na. hide under the bed");
                        printf("\nb. go through the door");
                }
        }
        else if (choice == 'b') // two
        {
                getchar();
		printf("\nyou jump up towards the moon and land on the windowsill");
                getchar();
                printf("\nthe moonlight shimmers across your fur");
                printf("\nyou nudge your head against the pane and ... ");
                getchar();
                printf("\nit opens towards the night");
                printf("\nyou slink through and step to the edge of the roof");
                getchar();
                printf("\nbelow you lies a pool, inky and deep");
                printf("\nand to your left sits an open window");
                getchar();
                printf("\nwhat do you do?\n");
                printf("\na. jump in the pool");
                printf("\nb. slide through the open window");
        }
}
