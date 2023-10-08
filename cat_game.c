#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        printf("\nhey human... press enter\n");
        getchar();

        char choice;

        printf("\nyou are only a kitten and have been stolen from your family");

        getchar();
        printf("\nyou must escape\n");
        getchar();

        putchar('\n');
        printf("^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^ ^.^");
        putchar('\n');

        printf("\nyour fur bristles. you find yourself alone in an unfamiliar room");
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
        printf("\na. try to open the door");
        printf("\nb. jump through the small window\n");
        putchar('\n');

        scanf(" %c", &choice);

 	if (choice == 'a')
        {
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
                printf("\na. attack the HUMAN");
                printf("\nb. hide, then bolt through the door when it opens\n");
                putchar('\n');

                scanf(" %c", &choice);
		
		if (choice == 'a')
                {
                        printf("\nthe HUMAN opens the door");
                        printf("\nyou lunge at its ankles with your claws outsretched");
                        getchar();
                        printf("\nyou are too small to attack the HUMAN");
                        getchar();
                        printf("\nin an attempt to release itself from your grip, it kicks you into the wall");
                        getchar();
                        printf("\nthe pain is great, and your vision grows hazy");
                        printf("\nit cradles you in its arms");
			getchar();
                        printf("\nas death beckons, you realize the HUMAN is sad... ");
                        getchar();
                        printf("\ntears fall from its eyes");
                        getchar();
                        printf("\nYOU DIED\n");
                }
        }
        else if (choice == 'b')
        {
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
